// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MoviePipelineQueue.h"
#include "DeadlineJobPreset.h"

#include "MoviePipelineDeadlineExecutorJob.generated.h"

USTRUCT()
struct FPropertyRowEnabledInfo
{
	GENERATED_BODY()
	
	FName PropertyPath;
	bool bIsEnabled = false;
};

UCLASS(BlueprintType, config = EditorPerProjectUserSettings)
class MOVIEPIPELINEDEADLINE_API UMoviePipelineDeadlineExecutorJob : public UMoviePipelineExecutorJob
{
	GENERATED_BODY()
public:
	UMoviePipelineDeadlineExecutorJob();

	/** Helper to get Enabled state from Python if direct property access fails */
	UFUNCTION(BlueprintCallable, Category = "Deadline")
	bool IsJobEnabled() const;

	/** Helper to set Enabled state from Python if direct property access fails */
	UFUNCTION(BlueprintCallable, Category = "Deadline")
	void SetJobEnabled(bool bInEnabled);

	bool IsPropertyRowEnabledInMovieRenderJob(const FName& InPropertyPath) const;

	void SetPropertyRowEnabledInMovieRenderJob(const FName& InPropertyPath, bool bInEnabled);

	/** UObject interface */
	#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	

	/**
	 * Returns the Deadline job info with overrides applied, if enabled.
	 * Skips any property not 
	 */
	UFUNCTION(BlueprintCallable, Category = "DeadlineService")
	FDeadlineJobPresetStruct GetDeadlineJobPresetStructWithOverrides() const;

	/** `Batch Name` groups similar jobs together in the Deadline Monitor UI. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Deadline")
	FString BatchName;

	/** `Deadline Job Name` explicit name for the job in Deadline. If empty, a default name will be generated. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Deadline")
	FString DeadlineJobName;

	/* Deadline Job Preset. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deadline")
	TObjectPtr<UDeadlineJobPreset> JobPreset;

	/* Output directory override on Deadline. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Deadline")
	FDirectoryPath OutputDirectoryOverride;

	/* Filename Format override on Deadline. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Deadline")
	FString FilenameFormatOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Deadline")
	FDeadlineJobPresetStruct PresetOverrides = FDeadlineJobPresetStruct();

protected:

	UPROPERTY(config)
	TArray<FPropertyRowEnabledInfo> EnabledPropertyOverrides;
};

#pragma once

#include <string>
#include "ALVR-common/packet_types.h"

class Settings
{
	static Settings m_Instance;
	bool m_loaded;

	Settings();
	virtual ~Settings();

public:
	void Load();
	static Settings &Instance() {
		return m_Instance;
	}

	bool IsLoaded() {
		return m_loaded;
	}

	uint64_t m_universeId;

	std::string mSerialNumber;
	std::string mTrackingSystemName;
	std::string mModelNumber;
	std::string mDriverVersion;
	std::string mManufacturerName;
	std::string mRenderModelName;
	std::string mRegisteredDeviceType;

	int32_t m_nAdapterIndex;

	uint64_t m_DriverTestMode = 0;

	int m_refreshRate;
	uint32_t m_renderWidth;
	uint32_t m_renderHeight;
	int32_t m_recommendedTargetWidth;
	int32_t m_recommendedTargetHeight;

	float m_flSecondsFromVsyncToPhotons;
	float m_flIPD;

	bool m_enableFoveatedRendering;
	float m_foveationCenterSizeX;
	float m_foveationCenterSizeY;
	float m_foveationCenterShiftX;
	float m_foveationCenterShiftY;
	float m_foveationEdgeRatioX;
	float m_foveationEdgeRatioY;

	bool m_enableColorCorrection;
	float m_brightness;
	float m_contrast;
	float m_saturation;
	float m_gamma;
	float m_sharpening;

	int m_codec;
	bool m_use10bitEncoder;
	bool m_enableVbaq;
	bool m_usePreproc;
	uint32_t m_preProcSigma;
	uint32_t m_preProcTor;
	uint32_t m_encoderQualityPreset;
	uint32_t m_rateControlMode;
	uint32_t m_entropyCoding;
	bool m_force_sw_encoding;
	uint32_t m_swThreadCount;

	// Controller configs
	std::string m_controllerTrackingSystemName;
	std::string m_controllerManufacturerName;
	std::string m_controllerModelNumber;
	std::string m_controllerRenderModelNameLeft;
	std::string m_controllerRenderModelNameRight;
	std::string m_controllerSerialNumber;
	std::string m_controllerTypeLeft;
	std::string m_controllerTypeRight;
	std::string mControllerRegisteredDeviceType;
	std::string m_controllerInputProfilePath;
	bool m_disableController;

	bool m_overrideTriggerThreshold;
	float m_triggerThreshold;
	bool m_overrideGripThreshold;
	float m_gripThreshold;

	float m_hapticsIntensity;
	float m_hapticsAmplitudeCurve;
	float m_hapticsMinDuration;
	float m_hapticsLowDurationAmplitudeMultiplier;
	float m_hapticsLowDurationRange;

	int32_t m_causePacketLoss;

	int32_t m_trackingFrameOffset;

	bool m_aggressiveKeyframeResend;

	// They are not in config json and set by "SetConfig" command.
	bool m_captureLayerDDSTrigger = false;
	bool m_captureComposedDDSTrigger = false;
	
	int m_controllerMode = 0;

	bool m_TrackingRefOnly = false;

	bool m_enableViveTrackerProxy = false;

	bool m_useHeadsetTrackingSystem = false;
	
	bool m_enableFec;

	bool m_enableLinuxVulkanAsync;

	uint32_t m_nvencTuningPreset;
	uint32_t m_nvencMultiPass;
	uint32_t m_nvencAdaptiveQuantizationMode;
	int64_t m_nvencLowDelayKeyFrameScale;
	int64_t m_nvencRefreshRate;
	bool m_nvencEnableIntraRefresh;
	int64_t m_nvencIntraRefreshPeriod;
	int64_t m_nvencIntraRefreshCount;
	int64_t m_nvencMaxNumRefFrames;
	int64_t m_nvencGopLength;
	int64_t m_nvencPFrameStrategy;
	int64_t m_nvencRateControlMode;
	int64_t m_nvencRcBufferSize;
	int64_t m_nvencRcInitialDelay;
	int64_t m_nvencRcMaxBitrate;
	int64_t m_nvencRcAverageBitrate;
	bool m_nvencEnableWeightedPrediction;

	std::string m_captureFrameDir;
};

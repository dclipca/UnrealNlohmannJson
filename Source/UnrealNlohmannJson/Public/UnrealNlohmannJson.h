#pragma once

#include "CoreMinimal.h"
#include "ThirdParty/UnrealNlohmannJsonLibrary/json.hpp"

class UnrealNlohmannJson
{
private:
	static nlohmann::json JsonObj;

public:
	// Constructor
	UnrealNlohmannJson();

	// Methods
	static void SetJsonData(const nlohmann::json& NewJsonObj);
	static const nlohmann::json& GetJsonData();
	static FString Dump();
};
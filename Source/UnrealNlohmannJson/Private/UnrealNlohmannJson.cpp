#include "UnrealNlohmannJson.h"

// Initialize static member variable
nlohmann::json UnrealNlohmannJson::JsonObj;

UnrealNlohmannJson::UnrealNlohmannJson()
{
}

void UnrealNlohmannJson::SetJsonData(const nlohmann::json& NewJsonObj)
{
	JsonObj = NewJsonObj;
}

const nlohmann::json& UnrealNlohmannJson::GetJsonData()
{
	return JsonObj;
}

FString UnrealNlohmannJson::Dump()
{
	const std::string JsonString = JsonObj.dump();
	return FString(JsonString.c_str());
}
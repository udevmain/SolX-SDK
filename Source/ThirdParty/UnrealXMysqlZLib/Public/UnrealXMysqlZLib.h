﻿#pragma once

#include "Modules/ModuleManager.h"

class FUnrealXMysqlZLibModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

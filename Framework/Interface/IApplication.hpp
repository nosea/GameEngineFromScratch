#pragma once
#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace My {
    Interface IApplication : implements IRuntimeModule
    {
    public:
        virtual int Initialize() = 0;
        virtual void Finalize() = 0;
        // One cycle of the main loop
        virtual void Tick() = 0;
        // 用于查询应用程序是否退出
        virtual bool IsQuit() = 0;
    };
}
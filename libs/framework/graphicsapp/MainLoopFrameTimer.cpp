// libs/framework/graphicsapp/MainLoopFrameTimer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.framework.graphicsapp

#include "MainLoopFrameTimer.h"

namespace jag {
    // 0x100024170: MainLoopFrameTimer::GetLogicTick() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100064280: MainLoopFrameTimer::GetFastUpdateLoopEnabled() const has the same machine code as eastl::optional<eastl::vector<char>>::operator bool() const

    // 0x100066b70: MainLoopFrameTimer::GetFrameCount() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x100073980: MainLoopFrameTimer::GetMainLoopRate() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: MainLoopFrameTimer::GetMainLoopInterval() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10019bbb0: MainLoopFrameTimer::GetUniqueLoopID() const has the same machine code as SystemSettings::GetModeGame() const

    // 0x100b03950
    void MainLoopFrameTimer::SetMainLoopInterval(unsigned int arg1) {
        if (m_mainLoopInterval != arg1) {
            m_mainLoopInterval = arg1;
            m_mainLoopRate = (int)(1000 / (unsigned long)arg1);
            field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>() - m_mainLoopInterval;
            field_12 = 0;
        }
    }

    // 0x100b03f50
    shared_ptr_if_not_array<OpenGLView>::type
    make_shared<OpenGLView, float, float, float, float, Window*, input::Input*>(float&& arg1, float&& arg2,
                                                                                float&& arg3, float&& arg4,
                                                                                Window*&& arg5, input::Input*&& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        Input** in_stack_00000008;
        int local_44;
        OpenGLView* local_40[2];

        auto arg1_00 = aligned_alloc(408, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<OpenGLView, float, float, float, float, Window*, input::Input*>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, (float*)arg5, (Window**)arg6, in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<OpenGLView>, int, OpenGLView*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100b04370
    void MainLoopFrameTimer::MainInit() {
        field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
    }

    // 0x100b04ca0
    unsigned int MainLoopFrameTimer::Update(unsigned long long arg1) {
        MainLoopFrameTimer* this_00 = (MainLoopFrameTimer*)&field_98720;
        this_00->Update();
        unsigned long long uVar2 = field_98704;
        unsigned long long arg3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        field_98704 = arg3;
        if (m_renderingDisabled == '\0') {
            uVar2 = WaitUntilMaxFPS(this_00, arg1, uVar2, arg3);
            field_98704 = uVar2;
        }
        m_uniqueLoopID = m_uniqueLoopID + 1;
        unsigned long uVar3 = SystemTimer::ConvertNStoMS(field_98704);
        if (uVar3 < field_24) {
            LogAssert("frameStartTimeMS >= m_firstMainLoopMS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "MainLoopFrameTimer.cpp",
                      45, nullptr);
        }
        int iVar1 = (int)((uVar3 - field_24) / (unsigned long)m_mainLoopInterval);
        unsigned int uVar4 = iVar1 - field_12;
        if (100 < uVar4) {
            field_12 = iVar1 - 100;
            uVar4 = 100;
        }
        return uVar4;
    }

    // 0x100b04d70
    void MainLoopFrameTimer::MainLogic() {
        field_48.RecordLogicLoop();
        m_logicTick = m_logicTick + 1;
        field_12 = field_12 + 1;
    }

    // 0x100b04fd0
    void MainLoopFrameTimer::PostFrameUpdate() {
        m_frameCount = m_frameCount + 1;
    }

    // 0x100b06030
    unsigned long long MainLoopFrameTimer::WaitUntilMaxFPS(unsigned long long arg1, unsigned long long arg2,
                                                           unsigned long long arg3) {
        unsigned long long uVar1;
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000000000l>> local_28;
        unsigned long long local_20;

        if (arg1 != 0) {
            arg2_00 = (type*)(arg3 - arg2);
            local_20 = 0;
            uVar1 = (long)(1000000000 / arg1) - (long)arg2_00;
            if (arg2_00 <= (type*)(1000000000 / arg1) && uVar1 != 0) {
                local_20 = uVar1;
                local_28.duration<unsigned long long>(local_20, arg2_00);
                std::this_thread::sleep_for(&local_28);
            }
            arg3 = arg3 + local_20;
        }
        return arg3;
    }

    // 0x100b060c0
    void MainLoopFrameTimer::WaitUntilMaxFPS(unsigned long long arg1) {
        unsigned long long uVar1 = field_98704;
        unsigned long long arg3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        field_98704 = arg3;
        uVar1 = WaitUntilMaxFPS(arg1, uVar1, arg3);
        field_98704 = uVar1;
    }

} // namespace jag

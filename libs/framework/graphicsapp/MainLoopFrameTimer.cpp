// libs/framework/graphicsapp/MainLoopFrameTimer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.framework.graphicsapp

#include "MainLoopFrameTimer.h"

namespace jag {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    int MainLoopFrameTimer::GetLogicTick() const;

    // 0x100064280: the linker folded this into eastl::optional<eastl::vector<char, eastl::allocator> >::operator bool() const, which has identical code
    MainLoopFrameTimer::GetFastUpdateLoopEnabled() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int MainLoopFrameTimer::GetFrameCount() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    int MainLoopFrameTimer::GetMainLoopRate() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint MainLoopFrameTimer::GetMainLoopInterval() const;

    // 0x10019bbb0: the linker folded this into SystemSettings::GetModeGame() const, which has identical code
    long MainLoopFrameTimer::GetUniqueLoopID() const;

    // 0x100b03950, 64 bytes, placed by class name and debug map
    // MainLoopFrameTimer::SetMainLoopInterval(unsigned int)
    void MainLoopFrameTimer::SetMainLoopInterval(uint param_1) {
        if (m_mainLoopInterval != param_1) {
            m_mainLoopInterval = param_1;
            m_mainLoopRate = (int)(1000 / (ulong)param_1);
            field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this) - m_mainLoopInterval;
            field_12 = 0;
        }
    }

    // 0x100b03f50, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<OpenGLView>::type make_shared<OpenGLView, float, float, float, float, Window*, input::Input*>(float&&, float&&, float&&, float&&, Window*&&, input::Input*&&)
    jag* make_shared<OpenGLView, float, float, float, float, Window*, input::Input*>(float* param_1, float* param_2,
                                                                                     float* param_3, float* param_4,
                                                                                     Window** param_5,
                                                                                     Input** param_6) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        OpenGLView* local_40[2];

        pvVar1 = (void*)aligned_alloc(408, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<OpenGLView, float, float, float, float, Window*, input::Input*>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<OpenGLView>, int, OpenGLView*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100b04370, 32 bytes, placed by class name
    // MainLoopFrameTimer::MainInit()
    void MainLoopFrameTimer::MainInit() {
        field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
    }

    // 0x100b04ca0, 192 bytes, placed by class name
    // MainLoopFrameTimer::Update(unsigned long long)
    uint MainLoopFrameTimer::Update(ulonglong param_1) {
        int iVar1;
        ulonglong uVar2;
        ulonglong uVar3;
        ulong uVar4;
        uint uVar5;
        MainLoopFrameTimer* this_00;

        this_00 = (MainLoopFrameTimer*)&field_98720;
        this_00->Update();
        uVar3 = field_98704;
        uVar2 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_00);
        field_98704 = uVar2;
        if (m_renderingDisabled == '\0') {
            uVar3 = WaitUntilMaxFPS(this_00, param_1, uVar3, uVar2);
            field_98704 = uVar3;
        }
        m_uniqueLoopID = m_uniqueLoopID + 1;
        uVar4 = SystemTimer::ConvertNStoMS(field_98704);
        if (uVar4 < field_24) {
            /* WARNING: Subroutine does not return */
            LogAssert("frameStartTimeMS >= m_firstMainLoopMS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "MainLoopFrameTimer.cpp",
                      45, (char*)0);
        }
        iVar1 = (int)((uVar4 - field_24) / (ulong)m_mainLoopInterval);
        uVar5 = iVar1 - field_12;
        if (100 < uVar5) {
            field_12 = iVar1 + -100;
            uVar5 = 100;
        }
        return uVar5;
    }

    // 0x100b04d70, 48 bytes, placed by class name
    // MainLoopFrameTimer::MainLogic()
    void MainLoopFrameTimer::MainLogic() {
        (&field_48)->RecordLogicLoop();
        m_logicTick = m_logicTick + 1;
        field_12 = field_12 + 1;
    }

    // 0x100b04fd0, 16 bytes, placed by class name
    // MainLoopFrameTimer::PostFrameUpdate()
    void MainLoopFrameTimer::PostFrameUpdate() {
        m_frameCount = m_frameCount + 1;
    }

    // 0x100b06030, 96 bytes, placed by class name
    // MainLoopFrameTimer::WaitUntilMaxFPS(unsigned long long, unsigned long long, unsigned long long)
    ulonglong MainLoopFrameTimer::WaitUntilMaxFPS(ulonglong param_1, ulonglong param_2, ulonglong param_3) {
        long lVar1;
        duration local_28[8];
        long local_20;

        if (param_1 != 0) {
            local_20 = 0;
            lVar1 = 1000000000 / param_1 - (param_3 - param_2);
            if (param_3 - param_2 <= 1000000000 / param_1 && lVar1 != 0) {
                local_20 = lVar1;
                std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<unsigned long long>(
                    (ulonglong*)local_28, (type*)&local_20);
                std::this_thread::sleep_for(local_28);
            }
            param_3 = param_3 + local_20;
        }
        return param_3;
    }

    // 0x100b060c0, 80 bytes, placed by class name
    // MainLoopFrameTimer::WaitUntilMaxFPS(unsigned long long)
    void MainLoopFrameTimer::WaitUntilMaxFPS(ulonglong param_1) {
        ulonglong uVar1;
        ulonglong uVar2;

        uVar2 = field_98704;
        uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        field_98704 = uVar1;
        uVar2 = WaitUntilMaxFPS((MainLoopFrameTimer*)this, param_1, uVar2, uVar1);
        field_98704 = uVar2;
    }

} // namespace jag

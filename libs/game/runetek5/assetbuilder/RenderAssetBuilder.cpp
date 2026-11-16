// libs/game/runetek5/assetbuilder/RenderAssetBuilder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "RenderAssetBuilder.h"

namespace jag::game {
    // 0x10065a760, 256 bytes, placed by class name and debug map
    // RenderAssetBuilder::SecondaryContextCreate()
    undefined1 RenderAssetBuilder::SecondaryContextCreate() {
        uint uVar1;
        ulong uVar2;
        BaseApp* this_00;
        undefined4 local_74;
        undefined4 local_70;
        undefined1 local_69;
        function local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_70 = 0;
        local_69 = 1;
        std::function<void()>::function<RenderAssetBuilder::SecondaryContextCreate()::__3, void>(local_68, &local_69,
                                                                                                 &local_70);
        RunFunctionOnAllThreads(local_68);
        std::function<void()>::~function((function<void()>*)local_68);
        uVar1 = local_70.operator_cast_to_unsigned_int();
        uVar2 = (&field_8)->size();
        if (uVar1 < uVar2) {
            do {
                this_00 = (BaseApp*)BaseApp::GetAppInstance();
                this_00->ExecuteMainThreadEvents();
                local_74 = 500;
                std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)local_68,
                                                                                             (type*)&local_74);
                std::this_thread::sleep_for((duration*)local_68);
                uVar1 = local_70.operator_cast_to_unsigned_int();
                uVar2 = (&field_8)->size();
            } while (uVar1 < uVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_69;
    }

    // 0x10065a8b0, 240 bytes, placed by class name and debug map
    // RenderAssetBuilder::SecondaryContextDestroy()
    void RenderAssetBuilder::SecondaryContextDestroy() {
        uint uVar1;
        ulong uVar2;
        undefined4 local_74;
        undefined4 local_70[2];
        function local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_70[0] = 0;
        std::function<void()>::function<RenderAssetBuilder::SecondaryContextDestroy()::__4, void>(local_68, local_70);
        RunFunctionOnAllThreads(local_68);
        std::function<void()>::~function((function<void()>*)local_68);
        uVar1 = local_70->operator_cast_to_unsigned_int();
        uVar2 = (&field_8)->size();
        if (uVar1 < uVar2) {
            do {
                local_74 = 500;
                std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)local_68,
                                                                                             (type*)&local_74);
                std::this_thread::sleep_for((duration*)local_68);
                uVar1 = local_70->operator_cast_to_unsigned_int();
                uVar2 = (&field_8)->size();
            } while (uVar1 < uVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100660320, 64 bytes, placed by class name
    // RenderAssetBuilder::SecondaryContextCreate()::$_3::operator()() const
    /* RenderAssetBuilder::SecondaryContextCreate()::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    void RenderAssetBuilder::SecondaryContextCreate()::$_3::operator()() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        if (this_00->CreateSecondaryRenderContext() == '\0') {
            **(undefined1**)this = 0;
        }
        this_thread::SetAffinity(4);
        std::__atomic_base<unsigned int, true>::operator++(*(__atomic_base<unsigned int, true>**)(this + 8));
    }

    // 0x100660cc0, 48 bytes, placed by class name
    // RenderAssetBuilder::SecondaryContextDestroy()::$_4::operator()() const
    /* RenderAssetBuilder::SecondaryContextDestroy()::$_4::TEMPNAMEPLACEHOLDERVALUE() const
    */

    void RenderAssetBuilder::SecondaryContextDestroy()::$_4::operator()() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        this_00->DestroySecondaryRenderContext();
        std::__atomic_base<unsigned int, true>::operator++(*(__atomic_base<unsigned int, true>**)this);
    }

} // namespace jag::game

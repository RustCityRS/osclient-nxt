// libs/game/runetek5/config/iftype/componentproperties/HookProperties.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "HookProperties.h"

namespace jag::game {
    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    HookProperties::GetOnVarCStrTransmitVars();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    HookProperties::GetOnVarpTransmitVarps();

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    HookProperties::GetOnInvTransmitInvs();

    // 0x100396010: the linker folded this into oldscape::auth::SteamAuthLibWrapper::GetGameToken(), which has identical code
    HookProperties::GetOnVarCTransmitVars();

    // 0x100414cb0: the linker folded this into math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    HookProperties::GetOnStatTransmitStats();

    // 0x1005360f0, 128 bytes, placed by class name and debug map
    // HookProperties::GetHook(HookType) const
    Hook* HookProperties::GetHook(uint param_2) {
        char cVar1;
        undefined8 in_RAX;
        long lVar2;
        long lVar3;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        cVar1 = eastl::bitset<56ul, unsigned long long>::operator[]((bitset<56ul, unsigned long long>*)&field_40,
                                                                    (ulong)param_2);
        if (cVar1 == '\0') {
            return (Hook*)0;
        }
        uStack_28 = CONCAT17((char)param_2, (undefined7)uStack_28);
        lVar2 = find((uchar*)((long)&uStack_28 + 7));
        lVar3 = end();
        if (lVar2 != lVar3) {
            cVar1 = ((lVar2 + 8))->IsInit();
            if (cVar1 != '\0') {
                return (Hook*)(lVar2 + 8);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                        "iftype/componentproperties/HookProperties.cpp",
                        21, (char*)0);
    }

    // 0x1005361a0, 96 bytes, placed by class name and debug map
    // HookProperties::AddHook(HookType, Hook const&)
    void HookProperties::AddHook(uint param_2, Hook* param_3) {
        Hook* this_00;
        undefined1 in_AL;
        bool bVar1;
        undefined7 in_register_00000001;
        undefined8 uStack_38;

        uStack_38 = CONCAT71(in_register_00000001, in_AL);
        bVar1 = (bool)param_3->IsInit();
        (&field_40, (ulong)param_2, bVar1)->set();
        uStack_38 = CONCAT17((char)param_2, (undefined7)uStack_38);
        this_00 = (Hook*)eastl::vector_map<unsigned char, Hook, eastl::less<unsigned char>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned char, Hook>, eastl::allocator>>::
        operator[]((vector_map<unsigned char, Hook, eastl::less<unsigned char>, eastl::allocator,
                               eastl::vector<eastl::pair<unsigned char, Hook>, eastl::allocator>>*)this,
                   (uchar*)((long)&uStack_38 + 7));
        Hook::operator=(this_00, param_3);
    }

} // namespace jag::game

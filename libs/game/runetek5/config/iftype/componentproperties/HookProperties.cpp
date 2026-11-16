// libs/game/runetek5/config/iftype/componentproperties/HookProperties.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "HookProperties.h"

namespace jag::game {
    // 0x10016ea80: HookProperties::GetOnVarCStrTransmitVars() has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x1001a3c10: HookProperties::GetOnVarpTransmitVarps() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001cd990: HookProperties::GetOnInvTransmitInvs() has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x100396010: HookProperties::GetOnVarCTransmitVars() has the same machine code as oldscape::auth::SteamAuthLibWrapper::GetGameToken()

    // 0x100414cb0: HookProperties::GetOnStatTransmitStats() has the same machine code as math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue()

    // 0x1005360f0
    Hook* HookProperties::GetHook(HookType hookType) const {
        uint64_t in_RAX;

        uint64_t uStack_28 = in_RAX;
        if (!(field_40[(unsigned long)hookType])) {
            return nullptr;
        }
        uStack_28 = (((uint64_t)((char)hookType) << 56) | (uint64_t)((uint64_t)uStack_28));
        long lVar2 = find(*((unsigned char*)((long)&uStack_28 + 7)));
        long lVar3 = end();
        if (lVar2 != lVar3) {
            if (((lVar2 + 8))->IsInit()) {
                return (Hook*)(lVar2 + 8);
            }
        }
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                        "iftype/componentproperties/HookProperties.cpp",
                        21, nullptr);
    }

    // 0x1005361a0
    void HookProperties::AddHook(HookType hookType, const Hook& hook) {
        uint64_t in_RAX;

        uint64_t uStack_38 = in_RAX;
        bool arg2 = (bool)hook.IsInit();
        field_40 = eastl::bitset<56ul, unsigned long long>::set((unsigned long)hookType, arg2);
        uStack_38 = (((uint64_t)((char)hookType) << 56) | (uint64_t)((uint64_t)uStack_38));
        Hook* this_00 = (Hook*)(*this)[*((unsigned char*)((long)&uStack_38 + 7))];
        *this_00 = hook;
    }

} // namespace jag::game

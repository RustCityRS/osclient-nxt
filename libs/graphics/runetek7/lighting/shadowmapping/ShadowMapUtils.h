// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x10047dc70
    void GetShadowMapLodColour(int arg1) {
        uint8_t(*pauVar2)[16];
        int local_1c[3];

        local_1c[0] = arg1;
        ImVec4 local_78(1.5, 0.0, 0.0, 1.0);
        ImVec4 local_68(0.0, 1.5, 0.0, 1.0);
        ImVec4 local_58(0.0, 1.0, 5.5, 1.0);
        ImVec4 local_48(1.5, 0.0, 5.5, 1.0);
        ImVec4 local_38(1.0, 1.0, 1.0, 1.0);
        local_1c[1] = 0;
        local_1c[2] = 4;
        int iVar1 = math::Clamp<int>(*local_1c, *(local_1c + 1), *(local_1c + 2));
        pauVar2 = (uint8_t(*)[16])local_78[(long)iVar1];
        return *pauVar2;
    }

} // namespace jag::graphics

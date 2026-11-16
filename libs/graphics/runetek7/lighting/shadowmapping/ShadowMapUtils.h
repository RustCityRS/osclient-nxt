// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x10047dc70, 240 bytes, inline, placed by debug map only (low confidence)
    // GetShadowMapLodColour(int)
    undefined1[16] GetShadowMapLodColour(int param_1) {
        int iVar1;
        undefined1(*pauVar2)[16];
        ImVec4 local_78[16];
        ImVec4 local_68[16];
        ImVec4 local_58[16];
        ImVec4 local_48[16];
        ImVec4 local_38[28];
        int local_1c[3];

        local_1c[0] = param_1;
        ImVec4::ImVec4(local_78, 1.5, 0.0, 0.0, 1.0);
        ImVec4::ImVec4(local_68, 0.0, 1.5, 0.0, 1.0);
        ImVec4::ImVec4(local_58, 0.0, 1.0, 5.5, 1.0);
        ImVec4::ImVec4(local_48, 1.5, 0.0, 5.5, 1.0);
        ImVec4::ImVec4(local_38, 1.0, 1.0, 1.0, 1.0);
        local_1c[1] = 0;
        local_1c[2] = 4;
        iVar1 = math::Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        pauVar2 = (undefined1(*)[16])std::array<math::Vector4T<float>, 5ul>::operator[](
            (array<math::Vector4T<float>, 5ul>*)local_78, (long)iVar1);
        return *pauVar2;
    }

} // namespace jag::graphics

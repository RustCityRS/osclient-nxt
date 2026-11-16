// libs/graphics/graphicutils/createprimitive/CreateGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb6ae0, 16 bytes, placed by debug map only (low confidence)
    // GetGridVertexCount(unsigned int, unsigned int)
    int GetGridVertexCount(uint param_1, uint param_2) {
        return (param_1 + 1) * (param_2 + 1);
    }

    // 0x100bb6af0, 16 bytes, placed by debug map only (low confidence)
    // GetGridTriListIndexCount(unsigned int, unsigned int)
    int GetGridTriListIndexCount(uint param_1, uint param_2) {
        return param_1 * param_2 * 6;
    }

    // 0x100bb6b00, 464 bytes, placed by debug map only (low confidence)
    // CreateUnitGridVertices(math::Vector3T<float>*, math::Vector3T<float>*, math::Vector2T<float>*, unsigned int, unsigned int, unsigned int)
    void CreateUnitGridVertices(Vector3T* param_1, Vector3T* param_2, Vector2T* param_3, uint param_4, uint param_5,
                                uint param_6) {
        Vector3T* this;
        uint uVar2;
        ColourHSL local_80;
        ulong local_70;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        Vector3T* local_40;
        Vector3T* local_38;

        local_40 = param_2;
        local_38 = param_1;
        if (GetGridVertexCount(param_5, param_6) != 0) {
            local_70 = 0;
            local_60 = 1.0 / (float)param_5;
            local_5c = local_60 + local_60;
            do {
                local_64 = 1.0 - (float)local_70 * local_5c;
                local_68 = (float)local_70 * local_60;
                uVar2 = 0;
                do {
                    this = local_38;
                    if (local_38 == (Vector3T*)0) {
                        local_38 = (Vector3T*)0;
                    } else {
                        new (&local_80)
                            math::ColourHSL(((float)uVar2 + (float)uVar2) / (float)param_6 + -1.0, 0.0, local_64);
                        SetXYZ((Vector3T*)&local_80);
                        local_38 = this + (ulong)param_4;
                    }
                    if (local_40 == (Vector3T*)0) {
                        local_40 = (Vector3T*)0;
                    } else {
                        new (&local_80) math::ColourHSL(0.0, 1.0, 0.0);
                        local_40->SetXYZ((Vector3T*)&local_80);
                        local_40 = local_40 + (ulong)param_4;
                    }
                    if (param_3 == (Vector2T*)0) {
                        param_3 = (Vector2T*)0;
                    } else {
                        new (&local_80) math::Point<float>((float)uVar2 / (float)param_6, local_68);
                        math::Vector2T<float>::operator=((Vector2T<float>*)param_3, (Vector2T*)&local_80);
                        param_3 = param_3 + (ulong)param_4;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 <= param_6);
                uVar2 = (int)local_70 + 1;
                local_70 = (ulong)uVar2;
            } while (uVar2 <= param_5);
        }
    }

} // namespace jag::graphicutils

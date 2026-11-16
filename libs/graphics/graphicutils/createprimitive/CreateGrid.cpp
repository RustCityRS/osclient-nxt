// libs/graphics/graphicutils/createprimitive/CreateGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb6ae0
    int GetGridVertexCount(unsigned int arg1, unsigned int arg2) {
        return (arg1 + 1) * (arg2 + 1);
    }

    // 0x100bb6af0
    int GetGridTriListIndexCount(unsigned int arg1, unsigned int arg2) {
        return arg1 * arg2 * 6;
    }

    // 0x100bb6b00
    void CreateUnitGridVertices(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32,
                                math::Vector2T<float>* vector2, unsigned int arg4, unsigned int arg5,
                                unsigned int arg6) {
        Vector3T<float>* vector3T;
        unsigned int uVar2;
        ColourHSL local_80;
        unsigned long local_70;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;

        Vector3T<float>* local_40 = vector32;
        Vector3T<float>* local_38 = vector31;
        if (GetGridVertexCount(arg5, arg6) != 0) {
            local_70 = 0;
            local_60 = 1.0 / (float)arg5;
            local_5c = local_60 + local_60;
            do {
                local_64 = 1.0 - (float)local_70 * local_5c;
                local_68 = (float)local_70 * local_60;
                uVar2 = 0;
                do {
                    vector3T = local_38;
                    if (local_38 == nullptr) {
                        local_38 = nullptr;
                    } else {
                        local_80 = math::ColourHSL(((float)uVar2 + (float)uVar2) / (float)arg6 - 1.0, 0.0, local_64);
                        vector3T->SetXYZ(local_80);
                        local_38 = vector3T + (unsigned long)arg4;
                    }
                    if (local_40 == nullptr) {
                        local_40 = nullptr;
                    } else {
                        local_80 = math::ColourHSL(0.0, 1.0, 0.0);
                        local_40->SetXYZ(local_80);
                        local_40 = local_40 + (unsigned long)arg4;
                    }
                    if (vector2 == nullptr) {
                        vector2 = nullptr;
                    } else {
                        new (&local_80) math::Point((float)uVar2 / (float)arg6, local_68);
                        *vector2 = local_80;
                        vector2 = vector2 + (unsigned long)arg4;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 <= arg6);
                uVar2 = (int)local_70 + 1;
                local_70 = (unsigned long)uVar2;
            } while (uVar2 <= arg5);
        }
    }

} // namespace jag::graphicutils

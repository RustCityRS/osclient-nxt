// libs/math/matrix/Matrix22.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x1008eeff0
    Matrix22T<float>* Matrix22T<float>::operator[](unsigned int arg1) {
        if (2 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix22.inl",
                      158, nullptr);
        }
        return this + (unsigned long)arg1 * 8;
    }

    // 0x1008ef030
    Vector2T<float>* Vector2T<float>::operator*=(const Matrix22T<float>& matrix22) {
        float fVar1 = *(float*)this;
        Vector2T<float>* pVVar8 = &matrix22[0];
        auto pfVar9 = operator[](pVVar8, 0);
        float fVar2 = *pfVar9;
        float fVar3 = *(float*)(this + 4);
        pVVar8 = &matrix22[1];
        pfVar9 = (float*)operator[](pVVar8, 0);
        float fVar4 = *pfVar9;
        float fVar5 = *(float*)this;
        pVVar8 = &matrix22[0];
        pfVar9 = (float*)operator[](pVVar8, 1);
        float fVar6 = *pfVar9;
        float fVar7 = *(float*)(this + 4);
        pVVar8 = &matrix22[1];
        pfVar9 = (float*)operator[](pVVar8, 1);
        *(float*)(this + 4) = fVar7 * *pfVar9 + fVar5 * fVar6;
        *(float*)this = fVar3 * fVar4 + fVar1 * fVar2;
        return this;
    }

    // 0x1008ef120
    Vector2T<float>* Vector2T<float>::operator+=(const Vector2T<float>& vector2) {
        *(float*)this = *(float*)this + *(float*)vector2;
        *(float*)(this + 4) = *(float*)(this + 4) + *(float*)(vector2 + 4);
        return this;
    }

    // 0x1008f1350
    Vector2T<float>* Vector2T<float>::operator-=(const Vector2T<float>& vector2) {
        *(float*)this = *(float*)this - *(float*)vector2;
        *(float*)(this + 4) = *(float*)(this + 4) - *(float*)(vector2 + 4);
        return this;
    }

    // 0x1008f2060
    bool operator== <float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        if ((*(float*)vector31 == *(float*)vector32) && (*(float*)(vector31 + 4) == *(float*)(vector32 + 4))) {
            return *(float*)(vector31 + 8) == *(float*)(vector32 + 8);
        }
        return false;
    }

    // 0x1008f2090
    Vector2T<float> operator- <float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22) {

        return local_10(*(float*)vector21 - *(float*)vector22, *(float*)(vector21 + 4) - *(float*)(vector22 + 4));
        return local_10;
    }

    // 0x1008f20c0
    auto Vector2T<float>::Normalize() {
        auto result;

        float arg1 = (float)InvLength(&result);
        operator*=(&result, arg1);
        return result;
    }

    // 0x1008f20e0
    Vector2T<float> operator* <float>(const Vector2T<float>& vector2, float arg2) {

        return local_10(*(float*)vector2 * arg2, arg2 * *(float*)(vector2 + 4));
        return local_10;
    }

    // 0x1008f2760
    Vector2T<float> operator+ <float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22) {

        return local_10(*(float*)vector22 + *(float*)vector21, *(float*)(vector22 + 4) + *(float*)(vector21 + 4));
        return local_10;
    }

} // namespace jag::math

namespace jag::graphics::internal {
    // 0x1008f1960
    bool VertexSetupDynamic::HasRoom(unsigned int arg1, unsigned int arg2) const {
        bool bVar3;

        long lVar1 = field_304.size();
        unsigned long uVar2 = field_304.capacity();
        if ((unsigned long)arg1 + lVar1 < uVar2) {
            lVar1 = field_424.size();
            uVar2 = field_424.capacity();
            bVar3 = (unsigned long)arg2 + lVar1 < uVar2;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x1008f2cf0
    void VertexSetupRingArray<GUIManagerVertexBase<short>>::OnEndFrame() {
        ((this + 144))->RotateBuffers();
    }

    // 0x1008f2d10
    void VertexSetupDynamic::OnEndFrame() {
        field_336.RotateBuffers();
        field_456.RotateBuffers();
        field_304.clear();
        field_424.clear();
    }

} // namespace jag::graphics::internal

namespace jag::graphics {
    // 0x1008f2930
    void UpdateShader(shared_ptr<Shader>& shader, const EffectList& effectList) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this;
        EffectList* this_00;

        bool cVar1 = shader.operator_cast_to_bool();
        uint32_t uVar2 = 1;
        if (cVar1) {
            this = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)shader.operator->();
            this_00 = (EffectList*)second();
            uVar2 = *this_00 != effectList;
        }
        return uVar2;
    }

} // namespace jag::graphics

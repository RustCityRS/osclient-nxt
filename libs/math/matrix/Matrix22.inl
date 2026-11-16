// libs/math/matrix/Matrix22.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x1008eeff0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix22T<float>::operator[](unsigned int)
    Matrix22T<float>* Matrix22T<float>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix22.inl",
                      158, (char*)0);
        }
        return this + (ulong)param_1 * 8;
    }

    // 0x1008ef030, 240 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator*=(Matrix22T<float> const&)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix22T<float> const&) */

    Vector2T<float>* Vector2T<float>::operator*=(Matrix22T* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        Vector2T<float>* pVVar8;
        float* pfVar9;

        fVar1 = *(float*)this;
        pVVar8 = (Vector2T<float>*)Matrix22T<float>::operator[]((Matrix22T<float>*)param_1, 0);
        pfVar9 = (float*)operator[](pVVar8, 0);
        fVar2 = *pfVar9;
        fVar3 = *(float*)(this + 4);
        pVVar8 = (Vector2T<float>*)Matrix22T<float>::operator[]((Matrix22T<float>*)param_1, 1);
        pfVar9 = (float*)operator[](pVVar8, 0);
        fVar4 = *pfVar9;
        fVar5 = *(float*)this;
        pVVar8 = (Vector2T<float>*)Matrix22T<float>::operator[]((Matrix22T<float>*)param_1, 0);
        pfVar9 = (float*)operator[](pVVar8, 1);
        fVar6 = *pfVar9;
        fVar7 = *(float*)(this + 4);
        pVVar8 = (Vector2T<float>*)Matrix22T<float>::operator[]((Matrix22T<float>*)param_1, 1);
        pfVar9 = (float*)operator[](pVVar8, 1);
        *(float*)(this + 4) = fVar7 * *pfVar9 + fVar5 * fVar6;
        *(float*)this = fVar3 * fVar4 + fVar1 * fVar2;
        return this;
    }

    // 0x1008ef120, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator+=(Vector2T<float> const&)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&) */

    Vector2T<float>* Vector2T<float>::operator+=(Vector2T* param_1) {
        *(float*)this = *(float*)this + *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) + *(float*)(param_1 + 4);
        return this;
    }

    // 0x1008f1350, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator-=(Vector2T<float> const&)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&) */

    Vector2T<float>* Vector2T<float>::operator-=(Vector2T* param_1) {
        *(float*)this = *(float*)this - *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) - *(float*)(param_1 + 4);
        return this;
    }

    // 0x1008f2060, 48 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<float>(Vector3T<float> const&, Vector3T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    bool operator==(Vector3T* param_1, Vector3T* param_2) {
        if ((*(float*)param_1 == *(float*)param_2) && (*(float*)(param_1 + 4) == *(float*)(param_2 + 4))) {
            return *(float*)(param_1 + 8) == *(float*)(param_2 + 8);
        }
        return false;
    }

    // 0x1008f2090, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator-<float>(Vector2T<float> const&, Vector2T<float> const&)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&,
   Vector2T<float> const&) */

    undefined8 operator-(Vector2T* param_1, Vector2T* param_2) {
        undefined8 local_10;

        new (&local_10)
            Point<float>(*(float*)param_1 - *(float*)param_2, *(float*)(param_1 + 4) - *(float*)(param_2 + 4));
        return local_10;
    }

    // 0x1008f20c0, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Normalize()
    Vector2T<float>* Vector2T<float>::Normalize() {
        float fVar1;

        fVar1 = (float)InvLength(this);
        operator*=(this, fVar1);
        return this;
    }

    // 0x1008f20e0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator*<float>(Vector2T<float> const&, float)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(float, Vector2T<float>
   const&) */

    undefined8 operator*(float param_1, Vector2T* param_2) {
        undefined8 local_10;

        new (&local_10) Point<float>(*(float*)param_2 * param_1, param_1 * *(float*)(param_2 + 4));
        return local_10;
    }

    // 0x1008f2760, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator+<float>(Vector2T<float> const&, Vector2T<float> const&)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&,
   Vector2T<float> const&) */

    undefined8 operator+(Vector2T* param_1, Vector2T* param_2) {
        undefined8 local_10;

        new (&local_10)
            Point<float>(*(float*)param_2 + *(float*)param_1, *(float*)(param_2 + 4) + *(float*)(param_1 + 4));
        return local_10;
    }

} // namespace jag::math

namespace jag::graphics::internal {
    // 0x1008f1960, 112 bytes, inline, placed by debug map only (low confidence)
    // VertexSetupDynamic::HasRoom(unsigned int, unsigned int) const
    bool VertexSetupDynamic::HasRoom(uint param_1, uint param_2) {
        long lVar1;
        ulong uVar2;
        bool bVar3;

        lVar1 = (&field_304)->size();
        uVar2 = (&field_304)->capacity();
        if ((ulong)param_1 + lVar1 < uVar2) {
            lVar1 = (&field_424)->size();
            uVar2 = (&field_424)->capacity();
            bVar3 = (ulong)param_2 + lVar1 < uVar2;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x1008f2cf0, 32 bytes, inline, placed by debug map only (low confidence)
    // VertexSetupRingArray<GUIManagerVertexBase<short> >::OnEndFrame()
    /* VertexSetupRingArray<GUIManagerVertexBase<float>
   >::OnEndFrame() */

    void VertexSetupRingArray<GUIManagerVertexBase<float>>::OnEndFrame() {
        ((this + 144))->RotateBuffers();
    }

    // 0x1008f2d10, 80 bytes, inline, placed by debug map only (low confidence)
    // VertexSetupDynamic::OnEndFrame()
    void VertexSetupDynamic::OnEndFrame() {
        (&field_336)->RotateBuffers();
        (&field_456)->RotateBuffers();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

} // namespace jag::graphics::internal

namespace jag::graphics {
    // 0x1008f2930, 64 bytes, inline, placed by debug map only (low confidence)
    // UpdateShader(shared_ptr<Shader>&, EffectList const&)
    undefined4 UpdateShader(shared_ptr* param_1, EffectList* param_2) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this;
        EffectList* this_00;
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = shared_ptr::operator_cast_to_bool(param_1);
        uVar2 = CONCAT31(extraout_var, 1);
        if (bVar1) {
            this =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                     eastl::allocator, 0>*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)param_1);
            this_00 = (EffectList*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this);
            uVar2 = EffectList::operator!=(this_00, param_2);
        }
        return uVar2;
    }

} // namespace jag::graphics

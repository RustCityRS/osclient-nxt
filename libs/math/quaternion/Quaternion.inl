// libs/math/quaternion/Quaternion.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    // 0x1001df930, 112 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::FromAxisAngle(Vector3T<float> const&, float)
    QuaternionT<float>* QuaternionT<float>::FromAxisAngle(Vector3T* param_1, float param_2) {
        undefined8 local_30[2];
        float local_20;
        float local_1c;

        local_1c = param_2 * 0.5;
        local_20 = (float)::sin(local_1c);
        local_1c = (float)::cos(local_1c);
        local_30[0] = math::operator*(param_1, local_20);
        Set(this, (Vector3T*)local_30, local_1c);
        return this;
    }

    // 0x1001df9a0, 96 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::Set(Vector3T<float> const&, float)
    QuaternionT<float>* QuaternionT<float>::Set(Vector3T* param_1, float param_2) {
        vector* pvVar1;
        undefined4* puVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(undefined4*)this = *(undefined4*)pvVar1;
        puVar2 = (undefined4*)param_1->y();
        *(undefined4*)(this + 4) = *puVar2;
        puVar2 = (undefined4*)param_1->second();
        *(undefined4*)(this + 8) = *puVar2;
        *(float*)(this + 12) = param_2;
        return this;
    }

    // 0x1002c7fd0, 32 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::Normalise()
    QuaternionT<float>* QuaternionT<float>::Normalise() {
        float fVar1;

        fVar1 = (float)Length(this);
        operator/=(this, fVar1);
        return this;
    }

    // 0x1002c83c0, 128 bytes, inline, placed by debug map only (low confidence)
    // void QuaternionT<float>::Serialise<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, bool) const
    void QuaternionT<float>::Serialise<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(PacketJ* param_1,
                                                                                                  bool param_2) {
        undefined3 in_register_00000011;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 4));
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 8));
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 12));
        } else {
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 4));
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 8));
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 12));
        }
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1001dfa40, 48 bytes, inline, placed by debug map only (low confidence)
    // RenderPassBitSet::HasShadowMapPass() const
    undefined4 RenderPassBitSet::HasShadowMapPass() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = HasFormatType(0);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = HasFormatType(1);
        }
        return uVar2;
    }

    // 0x1001dfa70, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderPassBitSet::HasRenderPass(unsigned int) const
    /* render::TextureFormatBitSet::HasFormatType(render::TextureFormatType) const */

    undefined4 render::TextureFormatBitSet::HasFormatType(uint param_2) {
        return CONCAT31((int3)(m_bits >> 8), (m_bits >> (param_2 & 31) & 1) != 0);
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x1001dfa70: the linker folded this into graphics::RenderPassBitSet::HasRenderPass(unsigned int) const, which has identical code
    TextureFormatBitSet::HasFormatType(TextureFormatType) const;

} // namespace jag::render

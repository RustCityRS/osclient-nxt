// libs/math/quaternion/Quaternion.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    // 0x1001df930
    QuaternionT<float>* QuaternionT<float>::FromAxisAngle(const Vector3T<float>& vector3, float arg2) {
        uint64_t local_30[2];

        float local_1c = arg2 * 0.5;
        float local_20 = (float)::sin(local_1c);
        local_1c = (float)::cos(local_1c);
        local_30[0] = *local_20 vector3;
        Set(this, (Vector3T<float>*)local_30, local_1c);
        return this;
    }

    // 0x1001df9a0
    QuaternionT<float>* QuaternionT<float>::Set(const Vector3T<float>& vector3, float arg2) {
        auto puVar1 = vector3.SSOBeginPtr();
        *(uint32_t*)this = *puVar1;
        puVar1 = (uint32_t*)vector3.y();
        *(uint32_t*)(this + 4) = *puVar1;
        puVar1 = (uint32_t*)vector3.second();
        *(uint32_t*)(this + 8) = *puVar1;
        *(float*)(this + 12) = arg2;
        return this;
    }

    // 0x1002c7fd0
    auto QuaternionT<float>::Normalise() {
        auto result;

        float arg1 = (float)Length(&result);
        operator/=(&result, arg1);
        return result;
    }

    // 0x1002c83c0
    void QuaternionT<float>::Serialise<oldscape::PacketJ<Array<unsigned char>>>(
        oldscape::PacketJ<Array<unsigned char>>& packetJ, bool arg2) const {
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.pT<float>(*(float*)this);
            packetJ.pT<float>(*(float*)(this + 4));
            packetJ.pT<float>(*(float*)(this + 8));
            packetJ.pT<float>(*(float*)(this + 12));
        } else {
            packetJ.pTPE<float>(*(float*)this);
            packetJ.pTPE<float>(*(float*)(this + 4));
            packetJ.pTPE<float>(*(float*)(this + 8));
            packetJ.pTPE<float>(*(float*)(this + 12));
        }
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1001dfa40
    bool RenderPassBitSet::HasShadowMapPass() const {
        bool cVar1 = HasFormatType(0);
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = HasFormatType(1);
        }
        return uVar2;
    }

    // 0x1001dfa70
    bool RenderPassBitSet::HasRenderPass(unsigned int arg1) const {
        return (m_bits >> (arg1 & 31) & 1) != 0;
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x1001dfa70: TextureFormatBitSet::HasFormatType(TextureFormatType) const has the same machine code as graphics::RenderPassBitSet::HasRenderPass(unsigned int) const

} // namespace jag::render

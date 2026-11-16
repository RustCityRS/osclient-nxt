// libs/game/runetek5/clientoptions/options/ClientOptions_InterfaceScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10060bda0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion(const char* str, bool arg2) {
        size_t arg2_00 = _strlen(str);
        pStringNoConversion(this, str, arg2_00, arg2);
    }

    // 0x10060c1c0
    size_t PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringNoConversion(eastl::string& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar4;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar4 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar4 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar4];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          485, "Bad version number in gStringNoConversion: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str_00 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t arg2_00 = _strlen(str_00);
        long lVar2 = *(long*)(this + 24);
        uVar4 = end();
        if (uVar4 < lVar2 + arg2_00 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                493, nullptr);
        }
        str.assign(str_00, arg2_00);
        *(size_t*)(this + 24) = *(long*)(this + 24) + arg2_00 + 1;
        return arg2_00;
    }

    // 0x10060f2b0
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumAutoSetup>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 7ul>>(*PTR_VALUE_NAMES_100ee9cc8);
        return result;
    }

    // 0x10060f5d0
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumBrightness>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 5ul>>(*PTR_VALUE_NAMES_100ee9cd0);
        return result;
    }

    // 0x10060f840
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumOptionToggle>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 2ul>>(*PTR_VALUE_NAMES_100ee9ce8);
        return result;
    }

    // 0x10060fbe0
    WrapArray<char const* const> GetEnumValueNames<render::VSyncMode>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 5ul>>(*PTR_VALUE_NAMES_100ee9d18);
        return result;
    }

    // 0x10060fec0
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumRemoveRoof>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 4ul>>(*PTR_VALUE_NAMES_100ee9cd8);
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x10060e270
    game::option::EnumAntialiasingMode
    Clamp<game::option::EnumAntialiasingMode>(const game::option::EnumAntialiasingMode& enumAntialiasingMode1,
                                              const game::option::EnumAntialiasingMode& enumAntialiasingMode2,
                                              const game::option::EnumAntialiasingMode& enumAntialiasingMode3) {
        auto pEVar1 = std::max<game::option::EnumAntialiasingMode>(enumAntialiasingMode2, enumAntialiasingMode1);
        pEVar1 = std::min<game::option::EnumAntialiasingMode>(enumAntialiasingMode3, *pEVar1);
        return *pEVar1;
    }

    // 0x10060e2b0
    graphics::GraphicsQuality Clamp<graphics::GraphicsQuality>(const graphics::GraphicsQuality& graphicsQuality1,
                                                               const graphics::GraphicsQuality& graphicsQuality2,
                                                               const graphics::GraphicsQuality& graphicsQuality3) {
        auto pGVar1 = std::max<graphics::GraphicsQuality>(graphicsQuality2, graphicsQuality1);
        pGVar1 = std::min<graphics::GraphicsQuality>(graphicsQuality3, *pGVar1);
        return *pGVar1;
    }

    // 0x10060e2e0
    game::option::EnumBloom Clamp<game::option::EnumBloom>(const game::option::EnumBloom& enumBloom1,
                                                           const game::option::EnumBloom& enumBloom2,
                                                           const game::option::EnumBloom& enumBloom3) {
        auto pEVar1 = std::max<game::option::EnumBloom>(enumBloom2, enumBloom1);
        pEVar1 = std::min<game::option::EnumBloom>(enumBloom3, *pEVar1);
        return *pEVar1;
    }

    // 0x10060e310
    graphics::SSAOPass::Mode Clamp<graphics::SSAOPass::Mode>(const graphics::SSAOPass::Mode& mode1,
                                                             const graphics::SSAOPass::Mode& mode2,
                                                             const graphics::SSAOPass::Mode& mode3) {
        auto mode2_00 = std::max<graphics::SSAOPass::Mode>(mode2, mode1);
        auto puVar1 = std::min<graphics::SSAOPass::Mode>(mode3, *mode2_00);
        return *puVar1;
    }

    // 0x10060e340
    game::option::EnumAnisotropicFiltering Clamp<game::option::EnumAnisotropicFiltering>(
        const game::option::EnumAnisotropicFiltering& enumAnisotropicFiltering1,
        const game::option::EnumAnisotropicFiltering& enumAnisotropicFiltering2,
        const game::option::EnumAnisotropicFiltering& enumAnisotropicFiltering3) {
        auto pEVar1 =
            std::max<game::option::EnumAnisotropicFiltering>(enumAnisotropicFiltering2, enumAnisotropicFiltering1);
        pEVar1 = std::min<game::option::EnumAnisotropicFiltering>(enumAnisotropicFiltering3, *pEVar1);
        return *pEVar1;
    }

    // 0x10060e370
    game::option::EnumParticleQualityLevel Clamp<game::option::EnumParticleQualityLevel>(
        const game::option::EnumParticleQualityLevel& enumParticleQualityLevel1,
        const game::option::EnumParticleQualityLevel& enumParticleQualityLevel2,
        const game::option::EnumParticleQualityLevel& enumParticleQualityLevel3) {
        auto pEVar1 =
            std::max<game::option::EnumParticleQualityLevel>(enumParticleQualityLevel2, enumParticleQualityLevel1);
        pEVar1 = std::min<game::option::EnumParticleQualityLevel>(enumParticleQualityLevel3, *pEVar1);
        return *pEVar1;
    }

    // 0x10060ebf0
    bool operator!= <double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        bool bVar1 = vector31 == vector32;
        return !bVar1;
    }

} // namespace jag::math

namespace jag::game::option {
    class InterfaceScale {
    public:
        // virtual methods in vtable order
        virtual ~InterfaceScale();
        virtual uint64_t GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      unsigned int arg3);
        InterfaceScale(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<unsigned int>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100611170
    InterfaceScale::~InterfaceScale() {
        ~Option(this);
    }

} // namespace jag::game::option

// libs/game/runetek5/clientoptions/options/ClientOptions_InterfaceScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10060bda0, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pStringNoConversion(char const*, bool)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, char* param_1, bool param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        pStringNoConversion(this, param_1, sVar1, param_2);
    }

    // 0x10060c1c0, 240 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringNoConversion(eastl::string&, bool)
    size_t PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, basic_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    485, "Bad version number in gStringNoConversion: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                493, (char*)0);
        }
        param_1->assign(pcVar3, sVar5);
        *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        return sVar5;
    }

    // 0x10060f2b0, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumAutoSetup>()
    jag* GetEnumValueNames<game::option::EnumAutoSetup>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cc8);
        return this;
    }

    // 0x10060f5d0, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumBrightness>()
    jag* GetEnumValueNames<game::option::EnumBrightness>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cd0);
        return this;
    }

    // 0x10060f840, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumOptionToggle>()
    jag* GetEnumValueNames<game::option::EnumOptionToggle>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 2ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9ce8);
        return this;
    }

    // 0x10060fbe0, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<render::VSyncMode>()
    jag* GetEnumValueNames<render::VSyncMode>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9d18);
        return this;
    }

    // 0x10060fec0, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumRemoveRoof>()
    jag* GetEnumValueNames<game::option::EnumRemoveRoof>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cd8);
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x10060e270, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumAntialiasingMode Clamp<game::option::EnumAntialiasingMode>(game::option::EnumAntialiasingMode const&, game::option::EnumAntialiasingMode const&, game::option::EnumAntialiasingMode const&)
    undefined4 Clamp<game::option::EnumAntialiasingMode>(EnumAntialiasingMode* param_1, EnumAntialiasingMode* param_2,
                                                         EnumAntialiasingMode* param_3) {
        EnumAntialiasingMode* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumAntialiasingMode>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumAntialiasingMode>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x10060e2b0, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::GraphicsQuality Clamp<graphics::GraphicsQuality>(graphics::GraphicsQuality const&, graphics::GraphicsQuality const&, graphics::GraphicsQuality const&)
    undefined4 Clamp<graphics::GraphicsQuality>(GraphicsQuality* param_1, GraphicsQuality* param_2,
                                                GraphicsQuality* param_3) {
        GraphicsQuality* pGVar1;
        undefined4* puVar2;

        pGVar1 = std::max<graphics::GraphicsQuality>(param_2, param_1);
        puVar2 = (undefined4*)std::min<graphics::GraphicsQuality>(param_3, pGVar1);
        return *puVar2;
    }

    // 0x10060e2e0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumBloom Clamp<game::option::EnumBloom>(game::option::EnumBloom const&, game::option::EnumBloom const&, game::option::EnumBloom const&)
    undefined4 Clamp<game::option::EnumBloom>(EnumBloom* param_1, EnumBloom* param_2, EnumBloom* param_3) {
        EnumBloom* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumBloom>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumBloom>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x10060e310, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::SSAOPass::Mode Clamp<graphics::SSAOPass::Mode>(graphics::SSAOPass::Mode const&, graphics::SSAOPass::Mode const&, graphics::SSAOPass::Mode const&)
    undefined4 Clamp<graphics::SSAOPass::Mode>(Mode* param_1, Mode* param_2, Mode* param_3) {
        Mode* pMVar1;
        undefined4* puVar2;

        pMVar1 = std::max<graphics::SSAOPass::Mode>(param_2, param_1);
        puVar2 = (undefined4*)std::min<graphics::SSAOPass::Mode>(param_3, pMVar1);
        return *puVar2;
    }

    // 0x10060e340, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumAnisotropicFiltering Clamp<game::option::EnumAnisotropicFiltering>(game::option::EnumAnisotropicFiltering const&, game::option::EnumAnisotropicFiltering const&, game::option::EnumAnisotropicFiltering const&)
    undefined4 Clamp<game::option::EnumAnisotropicFiltering>(EnumAnisotropicFiltering* param_1,
                                                             EnumAnisotropicFiltering* param_2,
                                                             EnumAnisotropicFiltering* param_3) {
        EnumAnisotropicFiltering* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumAnisotropicFiltering>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumAnisotropicFiltering>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x10060e370, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumParticleQualityLevel Clamp<game::option::EnumParticleQualityLevel>(game::option::EnumParticleQualityLevel const&, game::option::EnumParticleQualityLevel const&, game::option::EnumParticleQualityLevel const&)
    undefined4 Clamp<game::option::EnumParticleQualityLevel>(EnumParticleQualityLevel* param_1,
                                                             EnumParticleQualityLevel* param_2,
                                                             EnumParticleQualityLevel* param_3) {
        EnumParticleQualityLevel* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumParticleQualityLevel>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumParticleQualityLevel>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x10060ebf0, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<double>(Vector3T<double> const&, Vector3T<double> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<double> const&,
   Vector3T<double> const&) */

    bool operator!=(Vector3T* param_1, Vector3T* param_2) {
        bool bVar1;

        bVar1 = operator==(param_1, param_2);
        return !bVar1;
    }

} // namespace jag::math

namespace jag::game::option {
    class InterfaceScale {
    public:
        // virtual methods in vtable order
        virtual ~InterfaceScale();
        virtual GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, unsigned int);
        InterfaceScale(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100609190, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // InterfaceScale::~InterfaceScale(): jumps straight to the base-object destructor

    // 0x1006091f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // AntialiasingMode::~AntialiasingMode(): jumps straight to the base-object destructor

    // 0x100611170, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InterfaceScale::~InterfaceScale()
    /* Option<unsigned int>::~Option() */

    void Option<unsigned int>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option

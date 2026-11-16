// _unplaced/projects/osclient/unity_3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "libs/bytepacking/ShuffledPacket.h"
#include "libs/hal/system/auth/AuthWeb.h"
#include "libs/ui/components/Component.h"
#include "projects/osclient/ProtShuffleIncludes.h"

namespace jag::oldscape {
    template <
        typename...> // 14 instantiations, e.g. <bool>, <eastl::map<eastl::string, bool, eastl::less<eastl::basic_string<char,, <float>
    class JsonDeserializer {
    public:
        void Deserialize(Json::Value const&, RSevenDebugConfiguration&);
        void Deserialize(Json::Value const&, bool&);
        void Deserialize(Json::Value const&,
                         eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>&);
        void Deserialize(Json::Value const&, int&);
        void Deserialize(Json::Value const&, DistanceFogParams&);
        void Deserialize(Json::Value const&, float&);
        void Deserialize(Json::Value const&, jag::graphics::SimpleScatteringParams&);
        void Deserialize(Json::Value const&, jag::math::Vector3T<float>&);
        void Deserialize(Json::Value const&, jag::graphics::SSAOParams&);
        void Deserialize(Json::Value const&, jag::graphics::SSAOPass::Mode&);
        void Deserialize(Json::Value const&, jag::graphics::SunlightOptions&);
        void Deserialize(Json::Value const&, jag::graphics::GraphicsQuality&);
        void Deserialize(Json::Value const&, TonemappingParams&);
        void Deserialize(Json::Value const&, jag::graphics::VolumetricScatteringParams&);
    };

    template <
        typename...> // 14 instantiations, e.g. <bool>, <eastl::map<eastl::string, bool, eastl::less<eastl::basic_string<char,, <float>
    class JsonSerializer {
    public:
        JsonSerializer<RSevenDebugConfiguration>* Serialize(RSevenDebugConfiguration const&);
        JsonSerializer<bool>* Serialize(bool const&);
        map* Serialize(eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator> const&);
        JsonSerializer<int>* Serialize(int const&);
        JsonSerializer<DistanceFogParams>* Serialize(DistanceFogParams const&);
        JsonSerializer<float>* Serialize(float const&);
        JsonSerializer<jag::graphics::SimpleScatteringParams>* Serialize(jag::graphics::SimpleScatteringParams const&);
        JsonSerializer<jag::math::Vector3T<float>>* Serialize(jag::math::Vector3T<float> const&);
        JsonSerializer<jag::graphics::SSAOParams>* Serialize(jag::graphics::SSAOParams const&);
        JsonSerializer<jag::graphics::SSAOPass::Mode>* Serialize(jag::graphics::SSAOPass::Mode const&);
        SunlightOptions* Serialize(jag::graphics::SunlightOptions const&);
        JsonSerializer<jag::graphics::GraphicsQuality>* Serialize(jag::graphics::GraphicsQuality const&);
        JsonSerializer<TonemappingParams>* Serialize(TonemappingParams const&);
        JsonSerializer<jag::graphics::VolumetricScatteringParams>*
        Serialize(jag::graphics::VolumetricScatteringParams const&);
    };

    // 0x103c04d60, 24 bytes, __bss; zero-initialised
    AllFonts;

    // 0x100077660, 64 bytes, inline, placed by nothing (unplaced)
    // DoCommand_Help(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::$_85::operator()(eastl::string const&, ConsoleCommandHelp const&) const
    /* DoCommand_Help(OSClientConsole&,
   eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)::$_85::TEMPNAMEPLACEHOLDERVALUE(eastl::string const&,
   ConsoleCommandHelp const&) const */

    void oldscape::DoCommand_Help(
        OSClientConsole&,
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::$_85::operator()(basic_string* param_1,
                                                                                               ConsoleCommandHelp*
                                                                                                   param_2) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>* this;
        char* pcVar1;

        this =
            *(basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>**)param_1;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>::append(
            this, pcVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>::append(
            *(basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>**)param_1,
            ", ");
    }

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::gArrayBuffer_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::gStringCP1252ToUTF8();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::pStringNoConversion();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::pStringUTF8ToCP1252();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g3();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g4();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::gBit();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g1_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g1_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g1_alt3();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g2_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g2_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g2_alt3();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g3_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g3_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g3_alt3();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g4_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g4_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    SuperShuffledPacketFactory::g4_alt3();

    // 0x1000834d0, 48 bytes, placed by nothing (unplaced)
    // FileRSevenDebugPresetProvider::Reload()::$_3::operator()(Filename const&, Filename const&) const
    /* FileRSevenDebugPresetProvider::Reload()::$_3::TEMPNAMEPLACEHOLDERVALUE(Filename
   const&, Filename const&) const */

    bool FileRSevenDebugPresetProvider::Reload()::$_3::operator()(Filename* param_1, Filename* param_2) {
        long lVar1;

        lVar1 = param_1->GetLastModified();
        return param_2->GetLastModified() < lVar1;
    }

    // 0x1000839e0, 768 bytes, inline, placed by class header (inline)
    // JsonSerializer<RSevenDebugConfiguration>::Serialize(RSevenDebugConfiguration const&)
    JsonSerializer<RSevenDebugConfiguration>*
    JsonSerializer<RSevenDebugConfiguration>::Serialize(RSevenDebugConfiguration* param_1) {
        Value* pVVar1;
        oldscape local_40[40];

        new (this) Json::Value(0);
        JsonSerialize<bool>(local_40, (bool*)param_1);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "debugPointLight");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>((map*)local_40);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "effects");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<int>(local_40, (int*)&param_1->field_352);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "sampleLevel");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<int>(local_40, &param_1->field_56);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "effectTransitionTimeMilliseconds");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<DistanceFogParams>(local_40, (DistanceFogParams*)&param_1->field_60);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "fogParams");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::graphics::SimpleScatteringParams>(local_40, (SimpleScatteringParams*)&param_1->field_72);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "lightScatteringParams");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::graphics::SSAOParams>(local_40, (SSAOParams*)&param_1->field_140);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "ssao");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::graphics::SSAOPass::Mode>(local_40, (Mode*)&param_1->field_136);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "ssaoMode");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<bool>(local_40, (bool*)&param_1->field_188);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "terrainBlend");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::graphics::SunlightOptions>((SunlightOptions*)local_40);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "sunlightOptions");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<TonemappingParams>(local_40, (TonemappingParams*)(param_1->field_192 + 60));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "tonemapping");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::graphics::VolumetricScatteringParams>(local_40,
                                                                 (VolumetricScatteringParams*)&param_1->field_272);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "volumetrics");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x100083e20, 32 bytes, inline, placed by class header (inline)
    // JsonSerializer<bool>::Serialize(bool const&)
    JsonSerializer<bool>* JsonSerializer<bool>::Serialize(bool* param_1) {
        new (this) Json::Value(*param_1);
        return this;
    }

    // 0x100083e40, 256 bytes, inline, placed by class header (inline)
    // JsonSerializer<eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> >::Serialize(eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> const&)
    map*
    oldscape::JsonSerializer<eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>::Serialize(
        map* param_1) {
        pair* ppVar2;
        char* pcVar3;
        Value* this;
        undefined8 extraout_RDX;
        undefined1 auVar4[16];
        oldscape local_90[40];
        pair<eastl::stringconst, bool> local_68[32];
        bool local_48[8];
        undefined8 local_40;
        undefined8 local_38;

        new (param_1) Json::Value(0);
        local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar4 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        while (true) {
            local_38 = auVar4._0_8_;
            if (!eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar4._8_8_))
                break;
            ppVar2 = (pair*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
            eastl::pair<eastl::stringconst, bool>::pair(local_68, ppVar2);
            JsonSerialize<bool>(local_90, local_48);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this = (Value*)Json::Value::operator[]((Value*)param_1, pcVar3);
            Json::Value::operator=(this, (Value*)local_90);
            local_90->~Value();
            local_68->~hash_node();
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
            auVar4._8_8_ = extraout_RDX;
            auVar4._0_8_ = local_38;
        }
        return param_1;
    }

    // 0x100083f70, 32 bytes, inline, placed by class header (inline)
    // JsonSerializer<int>::Serialize(int const&)
    JsonSerializer<int>* JsonSerializer<int>::Serialize(int* param_1) {
        new (this) Json::Value(*param_1);
        return this;
    }

    // 0x100083f90, 240 bytes, inline, placed by class header (inline)
    // JsonSerializer<DistanceFogParams>::Serialize(DistanceFogParams const&)
    JsonSerializer<DistanceFogParams>* JsonSerializer<DistanceFogParams>::Serialize(DistanceFogParams* param_1) {
        Value* pVVar1;
        oldscape local_40[40];

        new (this) Json::Value(0);
        JsonSerialize<bool>(local_40, (bool*)param_1);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "enabled");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)(param_1 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "intensity");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)(param_1 + 8));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "startDistance");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x1000840a0, 32 bytes, inline, placed by class header (inline)
    // JsonSerializer<float>::Serialize(float const&)
    JsonSerializer<float>* JsonSerializer<float>::Serialize(float* param_1) {
        new (this) Json::Value((double)*param_1);
        return this;
    }

    // 0x1000840c0, 496 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::graphics::SimpleScatteringParams>::Serialize(jag::graphics::SimpleScatteringParams const&)
    JsonSerializer<jag::graphics::SimpleScatteringParams>*
    JsonSerializer<jag::graphics::SimpleScatteringParams>::Serialize(SimpleScatteringParams* param_1) {
        Value* pVVar1;
        Value* this_00;
        vector* pvVar2;
        float* pfVar3;
        undefined1* this_01;
        oldscape local_40[40];

        new (this) Json::Value(0);
        JsonSerialize<jag::math::Vector3T<float>>(local_40, (Vector3T*)&param_1->field_16);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "inscatteringAmount");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::math::Vector3T<float>>(local_40, (Vector3T*)param_1);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "outscatteringAmount");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::math::Vector3T<float>>(local_40, (Vector3T*)&param_1->field_32);
        this_00 = (Value*)Json::Value::operator[]((Value*)this, "scatteringTint");
        pVVar1 = (Value*)local_40;
        Json::Value::operator=(this_00, pVVar1);
        local_40->~Value();
        this_01 = &param_1->field_48;
        pvVar2 = this_01->SSOBeginPtr(pVVar1);
        JsonSerialize<float>(local_40, (float*)pvVar2);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "scatteringDensity");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        pfVar3 = (float*)this_01->y();
        JsonSerialize<float>(local_40, pfVar3);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "startDistance");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        pfVar3 = (float*)this_01->second();
        JsonSerialize<float>(local_40, pfVar3);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "objectFalloff");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        pfVar3 = (float*)this_01->qw();
        JsonSerialize<float>(local_40, pfVar3);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "horizonFalloff");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x1000842d0, 256 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::math::Vector3T<float> >::Serialize(jag::math::Vector3T<float> const&)
    JsonSerializer<jag::math::Vector3T<float>>*
    JsonSerializer<jag::math::Vector3T<float>>::Serialize(Vector3T* param_1) {
        vector* pvVar1;
        Value* pVVar2;
        float* pfVar3;
        oldscape local_40[40];

        Json::Value::Value();
        pvVar1 = param_1->SSOBeginPtr(0);
        JsonSerialize<float>(local_40, (float*)pvVar1);
        pVVar2 = (Value*)Json::Value::operator[]((Value*)this, "x");
        Json::Value::operator=(pVVar2, (Value*)local_40);
        local_40->~Value();
        pfVar3 = (float*)param_1->y();
        JsonSerialize<float>(local_40, pfVar3);
        pVVar2 = (Value*)Json::Value::operator[]((Value*)this, "y");
        Json::Value::operator=(pVVar2, (Value*)local_40);
        local_40->~Value();
        pfVar3 = (float*)param_1->second();
        JsonSerialize<float>(local_40, pfVar3);
        pVVar2 = (Value*)Json::Value::operator[]((Value*)this, "z");
        Json::Value::operator=(pVVar2, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x1000843d0, 688 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::graphics::SSAOParams>::Serialize(jag::graphics::SSAOParams const&)
    JsonSerializer<jag::graphics::SSAOParams>*
    JsonSerializer<jag::graphics::SSAOParams>::Serialize(SSAOParams* param_1) {
        Value* pVVar1;
        oldscape local_40[40];

        new (this) Json::Value(0);
        JsonSerialize<float>(local_40, (float*)param_1);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "radius");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_0 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "bias");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_8);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "detailAO");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_8 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "coarseAO");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_20);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "powerExponent");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_20 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "alcemyProjectionFactor");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "alchemyRadius");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_28 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "alchemyBias");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_36);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "alchemySigma");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<bool>(local_40, (bool*)&param_1->field_40);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "blurEnabled");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_44);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "blurSharpness");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x100084680, 64 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::graphics::SSAOPass::Mode>::Serialize(jag::graphics::SSAOPass::Mode const&)
    JsonSerializer<jag::graphics::SSAOPass::Mode>*
    JsonSerializer<jag::graphics::SSAOPass::Mode>::Serialize(Mode* param_1) {
        ulong in_RAX;
        int* piVar1;
        undefined8 local_18;

        if (*(int*)param_1 == 2) {
            local_18 = CONCAT44((int)(in_RAX >> 32), 1);
            piVar1 = (int*)&local_18;
        } else {
            local_18 = in_RAX & 4294967295;
            piVar1 = (int*)((long)&local_18 + 4);
        }
        JsonSerialize<int>((oldscape*)this, piVar1);
        return this;
    }

    // 0x1000846c0, 624 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::graphics::SunlightOptions>::Serialize(jag::graphics::SunlightOptions const&)
    SunlightOptions* JsonSerializer<jag::graphics::SunlightOptions>::Serialize(SunlightOptions* param_1) {
        Value* pVVar1;
        MSIType* in_RSI;
        float fVar2;
        undefined4 uVar3;
        oldscape local_50[40];
        undefined8 local_28[2];

        new (param_1) Json::Value(0);
        local_28[0] = in_RSI->GetCentrePos();
        JsonSerialize<jag::math::Vector3T<float>>(local_50, (Vector3T*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "sunColour");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        fVar2 = (float)in_RSI->GetOutlineRadiusAdjustment();
        local_28[0]._0_4_ = fVar2;
        JsonSerialize<float>(local_50, (float*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "sunElevation");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        local_28[0]._0_4_ = (float)in_RSI->GetAmbientLight();
        JsonSerialize<float>(local_50, (float*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "sunAngle");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        uVar3 = in_RSI->GetEnvMapIrradianceScale();
        local_28[0] = CONCAT44(local_28[0]._4_4_, uVar3);
        JsonSerialize<float>(local_50, (float*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "sunIntensity");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        local_28[0] = in_RSI->GetAmbientColour();
        JsonSerialize<jag::math::Vector3T<float>>(local_50, (Vector3T*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "ambientColour");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        fVar2 = (float)in_RSI->GetAmbientIntensity();
        local_28[0]._0_4_ = fVar2;
        JsonSerialize<float>(local_50, (float*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "ambientIntensity");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        local_28[0]._0_4_ = (float)in_RSI->GetMean();
        JsonSerialize<float>(local_50, (float*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "shadowStrength");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        uVar3 = in_RSI->GetSpriteID();
        local_28[0] = CONCAT44(local_28[0]._4_4_, uVar3);
        JsonSerialize<jag::graphics::GraphicsQuality>(local_50, (GraphicsQuality*)local_28);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)param_1, "shadowQuality");
        Json::Value::operator=(pVVar1, (Value*)local_50);
        local_50->~Value();
        return param_1;
    }

    // 0x100084950, 128 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::graphics::GraphicsQuality>::Serialize(jag::graphics::GraphicsQuality const&)
    JsonSerializer<jag::graphics::GraphicsQuality>*
    JsonSerializer<jag::graphics::GraphicsQuality>::Serialize(GraphicsQuality* param_1) {
        Value* this_00;
        oldscape local_50[44];
        int local_24;

        new (this) Json::Value(0);
        local_24 = *(int*)param_1;
        JsonSerialize<int>(local_50, &local_24);
        this_00 = (Value*)Json::Value::operator[]((Value*)this, "quality");
        Json::Value::operator=(this_00, (Value*)local_50);
        local_50->~Value();
        return this;
    }

    // 0x1000849d0, 288 bytes, inline, placed by class header (inline)
    // JsonSerializer<TonemappingParams>::Serialize(TonemappingParams const&)
    JsonSerializer<TonemappingParams>* JsonSerializer<TonemappingParams>::Serialize(TonemappingParams* param_1) {
        Value* pVVar1;
        oldscape local_40[40];

        new (this) Json::Value(0);
        JsonSerialize<bool>(local_40, (bool*)param_1);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "enabled");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_4);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "exposureKey");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_12);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "minBlackLum");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_4 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "maxWhiteLum");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x100084af0, 736 bytes, inline, placed by class header (inline)
    // JsonSerializer<jag::graphics::VolumetricScatteringParams>::Serialize(jag::graphics::VolumetricScatteringParams const&)
    JsonSerializer<jag::graphics::VolumetricScatteringParams>*
    JsonSerializer<jag::graphics::VolumetricScatteringParams>::Serialize(VolumetricScatteringParams* param_1) {
        Value* pVVar1;
        oldscape local_40[40];

        new (this) Json::Value(0);
        JsonSerialize<float>(local_40, (float*)param_1);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "density");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_0 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "inscatteringAmount");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_8);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "outscatteringAmount");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_8 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "skyboxDensityMultiplier");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_16);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "exaggerationFactor");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_16 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "g");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_24);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "skyG");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)((long)&param_1->field_24 + 4));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "bilateralBlurDepthFalloff");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::math::Vector3T<float>>(local_40, (Vector3T*)param_1->field_32);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "litFogColour");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<jag::math::Vector3T<float>>(local_40, (Vector3T*)param_1->field_48);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "unlitFogColour");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)(param_1->field_48 + 12));
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "litFogIntensity");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        JsonSerialize<float>(local_40, (float*)&param_1->field_64);
        pVVar1 = (Value*)Json::Value::operator[]((Value*)this, "unlitFogIntensity");
        Json::Value::operator=(pVVar1, (Value*)local_40);
        local_40->~Value();
        return this;
    }

    // 0x100084fa0, 368 bytes, inline, placed by class header (inline)
    // JsonDeserializer<RSevenDebugConfiguration>::Deserialize(Json::Value const&, RSevenDebugConfiguration&)
    void JsonDeserializer<RSevenDebugConfiguration>::Deserialize(Value* param_1, RSevenDebugConfiguration* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "debugPointLight");
        JsonDeserialize<bool>(pVVar1, (bool*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "effects");
        JsonDeserialize<eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>(
            pVVar1, (map*)&param_2->field_8);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "sampleLevel");
        JsonDeserialize<int>(pVVar1, (int*)&param_2->field_352);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "effectTransitionTimeMilliseconds");
        JsonDeserialize<int>(pVVar1, &param_2->field_56);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "fogParams");
        JsonDeserialize<DistanceFogParams>(pVVar1, (DistanceFogParams*)&param_2->field_60);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "lightScatteringParams");
        JsonDeserialize<jag::graphics::SimpleScatteringParams>(pVVar1, (SimpleScatteringParams*)&param_2->field_72);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "ssao");
        JsonDeserialize<jag::graphics::SSAOParams>(pVVar1, (SSAOParams*)&param_2->field_140);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "ssaoMode");
        JsonDeserialize<jag::graphics::SSAOPass::Mode>(pVVar1, (Mode*)&param_2->field_136);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "sunlightOptions");
        JsonDeserialize<jag::graphics::SunlightOptions>(pVVar1, (SunlightOptions*)param_2->field_192);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "terrainBlend");
        JsonDeserialize<bool>(pVVar1, (bool*)&param_2->field_188);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "tonemapping");
        JsonDeserialize<TonemappingParams>(pVVar1, (TonemappingParams*)(param_2->field_192 + 60));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "volumetrics");
        JsonDeserialize<jag::graphics::VolumetricScatteringParams>(pVVar1,
                                                                   (VolumetricScatteringParams*)&param_2->field_272);
    }

    // 0x100085460, 48 bytes, inline, placed by class header (inline)
    // JsonDeserializer<bool>::Deserialize(Json::Value const&, bool&)
    void JsonDeserializer<bool>::Deserialize(Value* param_1, bool* param_2) {
        undefined1 uVar2;

        if (Json::Value::isConvertibleTo(param_1, 5) == '\0') {
            uVar2 = false;
        } else {
            uVar2 = Json::Value::asBool(param_1);
        }
        *param_2 = (bool)uVar2;
    }

    // 0x100085490, 320 bytes, inline, placed by class header (inline)
    // JsonDeserializer<eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> >::Deserialize(Json::Value const&, eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator>&)
    void oldscape::JsonDeserializer<
        eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>::Deserialize(Value* param_1,
                                                                                                    map* param_2) {
        char* pcVar1;
        Value* pVVar2;
        bool* pbVar3;
        bool bVar4;
        string* this;
        eastl::string local_90[32];
        vector<std::string, std::allocator<std::string>> local_70[24];
        allocator local_58[8];
        undefined8 local_40;
        undefined8 local_38;

        param_2->clear();
        Json::Value::getMemberNames();
        local_38 = std::vector<std::string, std::allocator<std::string>>::begin(local_70);
        local_40 = std::vector<std::string, std::allocator<std::string>>::end(local_70);
        bVar4 = std::operator!=((__wrap_iter*)&local_38, (__wrap_iter*)&local_40);
        if (bVar4) {
            do {
                this = (string*)std::__wrap_iter<std::string*>::operator*((__wrap_iter<std::string*>*)&local_38);
                pcVar1 = (char*)std::string::c_str(this);
                pVVar2 = (Value*)Json::Value::operator[](param_1, pcVar1);
                pcVar1 = (char*)std::string::c_str(this);
                eastl::allocator::allocator(local_58, "EASTL basic_string");
                eastl::string::basic_string(local_90, pcVar1, local_58);
                pbVar3 =
                    (bool*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
                        (map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>*)param_2,
                        (basic_string*)local_90);
                JsonDeserialize<bool>(pVVar2, pbVar3);
                eastl::string::~basic_string(local_90);
                std::__wrap_iter<std::string*>::operator++((__wrap_iter<std::string*>*)&local_38);
                bVar4 = std::operator!=((__wrap_iter*)&local_38, (__wrap_iter*)&local_40);
            } while (bVar4);
        }
        std::vector<std::string, std::allocator<std::string>>::~vector(local_70);
    }

    // 0x1000857b0, 48 bytes, inline, placed by class header (inline)
    // JsonDeserializer<int>::Deserialize(Json::Value const&, int&)
    void JsonDeserializer<int>::Deserialize(Value* param_1, int* param_2) {
        char cVar1;
        int iVar2;

        cVar1 = Json::Value::isConvertibleTo(param_1, 1);
        iVar2 = 0;
        if (cVar1 != '\0') {
            iVar2 = Json::Value::asInt();
        }
        *param_2 = iVar2;
    }

    // 0x1000857e0, 112 bytes, inline, placed by class header (inline)
    // JsonDeserializer<DistanceFogParams>::Deserialize(Json::Value const&, DistanceFogParams&)
    void JsonDeserializer<DistanceFogParams>::Deserialize(Value* param_1, DistanceFogParams* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "enabled");
        JsonDeserialize<bool>(pVVar1, (bool*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "intensity");
        JsonDeserialize<float>(pVVar1, (float*)(param_2 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "startDistance");
        JsonDeserialize<float>(pVVar1, (float*)(param_2 + 8));
    }

    // 0x100085880, 64 bytes, inline, placed by class header (inline)
    // JsonDeserializer<float>::Deserialize(Json::Value const&, float&)
    void JsonDeserializer<float>::Deserialize(Value* param_1, float* param_2) {
        double dVar1;
        char cVar2;
        float fVar3;

        cVar2 = Json::Value::isConvertibleTo(param_1, 3);
        fVar3 = 0.0;
        if (cVar2 != '\0') {
            dVar1 = (double)Json::Value::asDouble(param_1);
            fVar3 = (float)dVar1;
        }
        *param_2 = fVar3;
    }

    // 0x1000858c0, 208 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::graphics::SimpleScatteringParams>::Deserialize(Json::Value const&, jag::graphics::SimpleScatteringParams&)
    void JsonDeserializer<jag::graphics::SimpleScatteringParams>::Deserialize(Value* param_1,
                                                                              SimpleScatteringParams* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "inscatteringAmount");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)&param_2->field_16);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "outscatteringAmount");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "scatteringTint");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)&param_2->field_32);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "scatteringDensity");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_48);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "startDistance");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_52);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "objectFalloff");
        JsonDeserialize<float>(pVVar1, &param_2[1].field_0);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "horizonFalloff");
        JsonDeserialize<float>(pVVar1, &param_2[1].field_4);
    }

    // 0x1000859e0, 112 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::math::Vector3T<float> >::Deserialize(Json::Value const&, jag::math::Vector3T<float>&)
    void JsonDeserializer<jag::math::Vector3T<float>>::Deserialize(Value* param_1, Vector3T* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "x");
        JsonDeserialize<float>(pVVar1, (float*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "y");
        JsonDeserialize<float>(pVVar1, (float*)(param_2 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "z");
        JsonDeserialize<float>(pVVar1, (float*)(param_2 + 8));
    }

    // 0x100085a50, 320 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::graphics::SSAOParams>::Deserialize(Json::Value const&, jag::graphics::SSAOParams&)
    void JsonDeserializer<jag::graphics::SSAOParams>::Deserialize(Value* param_1, SSAOParams* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "radius");
        JsonDeserialize<float>(pVVar1, (float*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "bias");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_0 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "detailAO");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_8);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "coarseAO");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_8 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "powerExponent");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_20);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "alcemyProjectionFactor");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_20 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "alchemyRadius");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_28);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "alchemyBias");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_28 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "alchemySigma");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_36);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "blurEnabled");
        JsonDeserialize<bool>(pVVar1, (bool*)&param_2->field_40);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "blurSharpness");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_44);
    }

    // 0x100085b90, 48 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::graphics::SSAOPass::Mode>::Deserialize(Json::Value const&, jag::graphics::SSAOPass::Mode&)
    void JsonDeserializer<jag::graphics::SSAOPass::Mode>::Deserialize(Value* param_1, Mode* param_2) {
        undefined8 in_RAX;
        int local_14;

        local_14 = (int)((ulong)in_RAX >> 32);
        JsonDeserialize<int>(param_1, &local_14);
        *(uint*)param_2 = (local_14 == 1) + 1;
    }

    // 0x100085bc0, 384 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::graphics::SunlightOptions>::Deserialize(Json::Value const&, jag::graphics::SunlightOptions&)
    void JsonDeserializer<jag::graphics::SunlightOptions>::Deserialize(Value* param_1, SunlightOptions* param_2) {
        Value* pVVar1;
        undefined8 local_60;
        undefined4 local_58;
        undefined8 local_50;
        undefined4 local_48;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        undefined4 local_2c;

        new (&local_60) jag::math::Vector3T<int>();
        new (&local_50) jag::math::Vector3T<int>();
        pVVar1 = (Value*)Json::Value::operator[](param_1, "sunColour");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)&local_60);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "sunElevation");
        JsonDeserialize<float>(pVVar1, &local_40);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "sunAngle");
        JsonDeserialize<float>(pVVar1, &local_3c);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "sunIntensity");
        JsonDeserialize<float>(pVVar1, &local_38);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "ambientColour");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)&local_50);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "ambientIntensity");
        JsonDeserialize<float>(pVVar1, &local_34);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "shadowStrength");
        JsonDeserialize<float>(pVVar1, &local_30);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "shadowQuality");
        JsonDeserialize<jag::graphics::GraphicsQuality>(pVVar1, (GraphicsQuality*)&local_2c);
        local_60->SetSunColour(local_58, param_2);
        param_2->SetSunElevation(local_40);
        param_2->SetSunAngle(local_3c);
        param_2->SetSunIntensity(local_38);
        local_50->SetAmbientColour(local_48, param_2);
        param_2->SetAmbientIntensity(local_34);
        param_2->SetShadowStrength(local_30);
        param_2->SetShadowQuality(local_2c);
    }

    // 0x100085d70, 48 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::graphics::GraphicsQuality>::Deserialize(Json::Value const&, jag::graphics::GraphicsQuality&)
    void JsonDeserializer<jag::graphics::GraphicsQuality>::Deserialize(Value* param_1, GraphicsQuality* param_2) {
        undefined8 in_RAX;
        Value* pVVar1;
        int local_14;

        local_14 = (int)((ulong)in_RAX >> 32);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "quality");
        JsonDeserialize<int>(pVVar1, &local_14);
        *(int*)param_2 = local_14;
    }

    // 0x100085db0, 128 bytes, inline, placed by class header (inline)
    // JsonDeserializer<TonemappingParams>::Deserialize(Json::Value const&, TonemappingParams&)
    void JsonDeserializer<TonemappingParams>::Deserialize(Value* param_1, TonemappingParams* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "enabled");
        JsonDeserialize<bool>(pVVar1, (bool*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "exposureKey");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_4);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "minBlackLum");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_12);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "maxWhiteLum");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_4 + 4));
    }

    // 0x100085e50, 352 bytes, inline, placed by class header (inline)
    // JsonDeserializer<jag::graphics::VolumetricScatteringParams>::Deserialize(Json::Value const&, jag::graphics::VolumetricScatteringParams&)
    void JsonDeserializer<jag::graphics::VolumetricScatteringParams>::Deserialize(Value* param_1,
                                                                                  VolumetricScatteringParams* param_2) {
        Value* pVVar1;

        pVVar1 = (Value*)Json::Value::operator[](param_1, "density");
        JsonDeserialize<float>(pVVar1, (float*)param_2);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "inscatteringAmount");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_0 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "outscatteringAmount");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_8);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "skyboxDensityMultiplier");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_8 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "exaggerationFactor");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_16);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "g");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_16 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "skyG");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_24);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "bilateralBlurDepthFalloff");
        JsonDeserialize<float>(pVVar1, (float*)((long)&param_2->field_24 + 4));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "litFogColour");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)param_2->field_32);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "unlitFogColour");
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T*)param_2->field_48);
        pVVar1 = (Value*)Json::Value::operator[](param_1, "litFogIntensity");
        JsonDeserialize<float>(pVVar1, (float*)(param_2->field_48 + 12));
        pVVar1 = (Value*)Json::Value::operator[](param_1, "unlitFogIntensity");
        JsonDeserialize<float>(pVVar1, (float*)&param_2->field_64);
    }

    // 0x1000b2e90, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        jag::math::Vector3T<int>::Vector3T(local_28);
        new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1000b2ef0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1000b2f10, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1000b2f70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1000b2fd0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1000b3030, 16 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        defaults::DefaultsGroup::GRAPHICS = 3;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p4();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p2_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p2_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p2_alt3();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p3_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p4_alt1();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p4_alt2();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    ShuffledPacketFactory::p4_alt3();

    // 0x100081670, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::FileRSevenDebugPresetProvider* placement_new<oldscape::FileRSevenDebugPresetProvider>(void*)
    FileRSevenDebugPresetProvider* placement_new<oldscape::FileRSevenDebugPresetProvider>(void* param_1) {
        oldscape::FileRSevenDebugPresetProvider::FileRSevenDebugPresetProvider(param_1);
        return param_1;
    }

    // 0x100081690, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>* placement_new<ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>, int, oldscape::FileRSevenDebugPresetProvider*&>(void*, int&&, oldscape::FileRSevenDebugPresetProvider*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>, int,
                       oldscape::FileRSevenDebugPresetProvider*&>(void* param_1, int* param_2,
                                                                  FileRSevenDebugPresetProvider** param_3) {
        ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::ref_counter_shared(param_1, (long)*param_2,
                                                                                        *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x10007e220, 16 bytes, inline, placed by nothing (unplaced)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x10007e230, 16 bytes, inline, placed by nothing (unplaced)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1,
   void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined1*)param_2 = *(undefined1*)param_1;
    }

    // 0x10007e240, 16 bytes, inline, placed by nothing (unplaced)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x10007e250, 16 bytes, inline, placed by nothing (unplaced)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1,
   void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        oldscape::OSClientConsole::OnFocusChanged()::$_1::operator()(param_1, param_2);
    }

    // 0x10007e310, 16 bytes, inline, placed by nothing (unplaced)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::console::internal {
    // 0x10007a580, 112 bytes, placed by nothing (unplaced)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(std::tuple<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>(std::tuple<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>*) */

    tuple*
    internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x10007b3d0, 48 bytes, placed by nothing (unplaced)
    // auto DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&, std::tuple<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>*)
    /* auto DecodeArgs<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::allocator>&, Console const&, eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&, std::tuple<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>*) */

    undefined8 internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
        fixed_vector* param_1, Console* param_2, fixed_vector* param_3, tuple* param_4) {
        undefined8 local_18;
        undefined8 local_10;

        local_10 = DecodeArg<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, param_2, param_3, (int)param_4);
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>::tuple<
            std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>, 0>(
            (reference_wrapper*)&local_18);
        return local_18;
    }

    // 0x10007b450, 16 bytes, placed by nothing (unplaced)
    // auto DecodeArg<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&, int)
    void internal::DecodeArg<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(fixed_vector* param_1,
                                                                                                  Console* param_2,
                                                                                                  fixed_vector* param_3,
                                                                                                  int param_4) {
        std::ref<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>(param_1);
    }

} // namespace jag::console::internal

namespace jag::graphics {
    // 0x103c04d10, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x103c04d50, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics

namespace jag::ui {
    // 0x1000792c0: the linker folded this into oldscape::minimenu::MinimenuComponent::MinimenuComponent(), which has identical code
    ComponentDragConfig::ComponentDragConfig();

    // 0x1000792d0: the linker folded this into oldscape::minimenu::MinimenuComponent::MinimenuComponent(), which has identical code
    ComponentDragConfig::ComponentDragConfig();

} // namespace jag::ui

namespace jag::oldscape::defaults {
    // 0x103c04d5c, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::auth {
    // 0x10007d0d0: the linker folded this into oldscape::ConsoleCommandHelp::operator=(oldscape::ConsoleCommandHelp&&), which has identical code
    GameSessionTokenCredentials::operator=(GameSessionTokenCredentials&&);

} // namespace jag::auth

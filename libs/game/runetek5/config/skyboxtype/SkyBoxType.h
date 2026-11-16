// libs/game/runetek5/config/skyboxtype/SkyBoxType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SkyBoxType {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetCubeMapMaterialID() const;
        GetStaticSkyModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&);
        SkyBoxType(BaseTemplateConfigTypeList<SkyBoxType>*, int);

        // data members, from how the methods use this: 108 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        uint field_56; // offset 56
        char _unknown_60[28];
        uint field_88;        // offset 88
        uint field_92;        // offset 92
        undefined4 field_96;  // offset 96
        undefined4 field_100; // offset 100
        char _unknown_104[4];
    };

    // 0x1004e1440, 32 bytes, deleting destructor, inline, placed by class name
    // SkyBoxType::~SkyBoxType()
    void SkyBoxType::~SkyBoxType() {
        ~SkyBoxType(this);
        operator_delete(this);
    }

    // 0x1005ca350, 16 bytes, complete-object destructor, inline, placed by class name
    // SkyBoxType::~SkyBoxType(): jumps straight to the base-object destructor

    // 0x1005ca360, 48 bytes, base-object destructor, inline, placed by class name
    // SkyBoxType::~SkyBoxType()
    void SkyBoxType::~SkyBoxType() {
        field_0 = &PTR__SkyBoxType_100f025a0;
        (&field_64)->~Array();
        ~ConfigType();
    }

    // 0x1005ca590, 16 bytes, complete-object constructor, inline, placed by class name
    // SkyBoxType::SkyBoxType(BaseTemplateConfigTypeList<SkyBoxType>*, int): jumps straight to the base-object constructor

    // 0x1005ca5a0, 96 bytes, base-object constructor, inline, placed by class name
    // SkyBoxType::SkyBoxType(BaseTemplateConfigTypeList<SkyBoxType>*, int)
    void SkyBoxType::SkyBoxType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<SkyBoxType>(param_1, param_2);
        new (this) MakeSharedPool<SkyBoxType, 16>();
        field_0 = &PTR__SkyBoxType_100f025a0;
        field_56 = 4294967295;
        new (&field_64) Array<unsigned short, eastl::allocator>();
        field_88 = 4294967295;
        field_92 = 0;
        field_96 = 4294967295;
        field_100 = 4294967295;
    }

} // namespace jag::game

namespace jag {
    // 0x1003e5ce0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::StaticPointLight* placement_new<game::StaticPointLight, game::StaticPointLight*, math::Vector3T<float>, unsigned int&>(void*, game::StaticPointLight*&&, math::Vector3T<float>&&, unsigned int&)
    StaticPointLight*
    jag::placement_new<game::StaticPointLight, game::StaticPointLight*, math::Vector3T<float>, unsigned int&>(
        void* param_1, StaticPointLight** param_2, Vector3T* param_3, uint* param_4) {
        game::StaticPointLight::StaticPointLight(param_1, *param_2, param_3, *param_4);
        return param_1;
    }

    // 0x1003e5ea0, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<graphics::WaterPatchConfig, eastl::allocator>* placement_new<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>(void*)
    vector* placement_new<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>(void* param_1) {
        eastl::vector<graphics::WaterPatchConfig, eastl::allocator>::vector(param_1);
        return param_1;
    }

    // 0x1003e5ec0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator> >* placement_new<ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator> >, int, eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*&>(void*, int&&, eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>, int,
                       eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                      vector** param_3) {
        ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1003e5f50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x1003e5f60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*)
    void ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>* this, ulong param_1,
        vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(vector**)(this + 24) = param_2;
    }

    // 0x1003e5fa0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator> >::DeleteData()
    void ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::DeleteData(
        ref_counter_shared<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::math {
    // 0x1003e5c90, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<unsigned int>::Vector3T<float>(Vector3T<float> const&)
    void Vector3T<unsigned int>::Vector3T<float>(Vector3T* param_1) {
        vector* pvVar1;
        float* pfVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(int*)this = (int)(long)*(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        *(int*)(this + 4) = (int)(long)*pfVar2;
        pfVar2 = (float*)param_1->second();
        *(int*)(this + 8) = (int)(long)*pfVar2;
    }

} // namespace jag::math

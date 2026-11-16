// libs/game/runetek5/config/skyboxtype/SkyBoxType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1003e5ce0
    game::StaticPointLight*
    placement_new<game::StaticPointLight, game::StaticPointLight*, math::Vector3T<float>, unsigned int&>(
        void* arg1, game::StaticPointLight*&& arg2, math::Vector3T<float>&& vector3, unsigned int& arg4) {
        new (arg1) game::StaticPointLight(arg2, vector3, arg4);
        return arg1;
    }

    // 0x1003e5ea0
    eastl::vector<graphics::WaterPatchConfig>* placement_new<eastl::vector<graphics::WaterPatchConfig>>(void* arg1) {
        new (arg1) eastl::vector<graphics::WaterPatchConfig>();
        return arg1;
    }

    // 0x1003e5ec0
    ref_counter_shared<eastl::vector<graphics::WaterPatchConfig>>*
    placement_new<ref_counter_shared<eastl::vector<graphics::WaterPatchConfig>>, int,
                  eastl::vector<graphics::WaterPatchConfig>*&>(void* arg1, int&& arg2,
                                                               eastl::vector<graphics::WaterPatchConfig>*& arg3) {
        new (arg1) ref_counter_shared<eastl::vector<graphics::WaterPatchConfig>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003e5f60
    ref_counter_shared<eastl::vector<graphics::WaterPatchConfig>>::ref_counter_shared(
        unsigned long arg1, eastl::vector<graphics::WaterPatchConfig>* waterPatchConfigs)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71e8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(vector<graphics::WaterPatchConfig>**)(this + 24) = waterPatchConfigs;
    }

    // 0x1003e5fa0
    void ref_counter_shared<eastl::vector<graphics::WaterPatchConfig>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((vector<graphics::WaterPatchConfig>*)(*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::game {
    class SkyBoxType {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint32_t GetCubeMapMaterialID() const;
        uint8_t* GetStaticSkyModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                   BuildRequest<graphics::Model, BuildModelMain>& buildRequest);
        SkyBoxType(BaseTemplateConfigTypeList<SkyBoxType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<SkyBoxType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        unsigned int field_56;
        uint8_t _unknown_60[28];
        unsigned int field_88;
        unsigned int field_92;
        uint32_t field_96;
        uint32_t m_cubeMapMaterialID;
        uint8_t _unknown_104[4];
    };

    // 0x1005ca360
    SkyBoxType::~SkyBoxType() {
        field_64.~Array();
    }

    // 0x1005ca5a0
    SkyBoxType::SkyBoxType(BaseTemplateConfigTypeList<SkyBoxType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<SkyBoxType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<SkyBoxType, 16>(),
          field_56(4294967295), field_88(4294967295), field_92(0), field_96(4294967295),
          m_cubeMapMaterialID(4294967295) {}

} // namespace jag::game

namespace jag::math {
    // 0x1003e5c90
    Vector3T<unsigned int>::Vector3T<float>(const Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        *(int*)this = (int)(long)*pfVar1;
        pfVar1 = (float*)vector3.y();
        *(int*)(this + 4) = (int)(long)*pfVar1;
        pfVar1 = (float*)vector3.second();
        *(int*)(this + 8) = (int)(long)*pfVar1;
    }

} // namespace jag::math

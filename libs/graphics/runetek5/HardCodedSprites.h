// libs/graphics/runetek5/HardCodedSprites.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class HardCodedSprites {
    public:
        class SpriteGroup;
        class SpriteReference;
        HardCodedSprites(Js5ResourceProvider& js5ResourceProvider, game::ConfigProvider& configProvider,
                         graphics::FontHelpers& fontHelpers, graphics::RT7Core& rt7Core);
        void MainDraw();
        auto GetSpriteReferencesFromGroupID(int arg1, bool arg2);
        auto GetSpriteReferences(SpriteGroup& spriteGroup);
        void ClearGroupSpriteReferences(SpriteGroup& spriteGroup);
        auto GetExistingSpriteReferencesFromGroupID(int arg1);
        uint32_t* GetCrossGroup();
        void SetCrossGroupOverride(int arg1);

    private:
        RT7Core* field_0;
        FontHelpers* field_8;
        ConfigProvider* field_16;
        Js5ResourceProvider* field_24;
        uint8_t field_32;
        uint8_t _unknown_33[207];
        uint32_t field_240;
        uint8_t _unknown_244[20];
        uint32_t field_264;
        uint8_t _unknown_268[20];
        uint32_t field_288;
        uint8_t _unknown_292[20];
        uint32_t field_312;
        uint8_t _unknown_316[20];
        uint32_t field_336;
        uint8_t _unknown_340[20];
        uint32_t field_360;
        uint8_t _unknown_364[20];
        uint32_t field_384;
        uint8_t _unknown_388[20];
        int field_408;
        uint8_t _unknown_412[20];
        uint32_t field_432;
        uint8_t _unknown_436[20];
        uint32_t field_456;
        uint8_t _unknown_460[20];
        uint32_t field_480;
        uint8_t _unknown_484[20];
        uint32_t field_504;
        uint8_t _unknown_508[20];
        SpriteGroup field_528;
    };

    class HardCodedSprites::SpriteGroup {
    public:
        ~SpriteGroup();
        SpriteGroup(HardCodedSprites* hardCodedSprites);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[12];
    };

    class HardCodedSprites::SpriteReference {
    public:
        ~SpriteReference();
        SpriteReference* operator=(const SpriteReference& spriteReference);
        SpriteReference(SpriteReference&& modIconReference);
        SpriteReference();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
    };

    // 0x100418160
    SpriteReference*
    HardCodedSprites::SpriteReference::operator=(const HardCodedSprites::SpriteReference& spriteReference) {
        field_0 = spriteReference.field_0;
        field_8 = spriteReference.field_8;
        return this;
    }

    // 0x100418640
    shared_ptr_if_not_array<EntityIcon>::type make_shared<EntityIcon, int, math::Point<int>>(int&& arg1,
                                                                                             math::Point<int>&& point) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        EntityIcon* local_38[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<EntityIcon>::type result;
        } else {
            local_38[0] = placement_new<EntityIcon, int, math::Point<int>>((void*)((long)arg1_00 + 32), arg1, point);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<EntityIcon>, int, EntityIcon*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100426b50
    HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&& modIconReference) {
        *(uint64_t*)this = modIconReference.field_0;
        ((this + 8))->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modIconReference.field_8);
    }

    // 0x100426bd0
    HardCodedSprites::SpriteReference::SpriteReference() : field_0(0) {}

    // 0x10098d5d0
    HardCodedSprites::SpriteGroup::SpriteGroup(HardCodedSprites* hardCodedSprites) : field_0(4294967295) {
        hardCodedSprites->field_40.push_back(this);
    }

} // namespace jag

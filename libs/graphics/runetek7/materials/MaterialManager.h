// libs/graphics/runetek7/materials/MaterialManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class MaterialManager {
    public:
        uint8_t MaterialsReady() const;
        ~MaterialManager();
        MaterialManager();
        Material GetDefaultMaterial() const;
        Material* GetMaterial(int arg1) const;
        bool IsValidMaterial(int arg1) const;
        void Initialise(MaterialRawProvider* materialRawProvider);
        void Destroy();
        void Serialise(PacketT<Array<unsigned char>>& arg1) const;
        void MainLogic();

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        unsigned int field_8;
        unsigned int field_12;
        uint8_t _unknown_16[272];
        uint32_t field_288;
        unsigned int field_292;
        uint8_t _unknown_296[8];
        Material m_defaultMaterial;
        uint8_t _unknown_520[16];
    };

    // 0x1001c3ab0
    uint8_t MaterialManager::MaterialsReady() const {
        return field_528.empty() ^ 1;
    }

    // 0x1001e0e30
    MaterialManager::~MaterialManager() {
        field_528.~Array();
    }

    // 0x1001e13b0
    MaterialManager::MaterialManager() : MaterialRawLoader() {}

    // 0x1007ba4c0
    Material* MaterialManager::GetMaterial(int arg1) const {
        uint8_t* this_00;
        unsigned long uVar2;

        if (arg1 != -1) {
            this_00 = &field_528;
            uVar2 = this_00->end();
            if ((unsigned long)arg1 < uVar2) {
                if (!(MaterialsReady())) {
                    LogAssert("MaterialsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/MaterialManager.h",
                              53, nullptr);
                }
                if (((Skybox*)(*this_00)[(unsigned long)arg1])->ShowSkybox()) {
                    return (Material*)(*this_00)[(unsigned long)arg1];
                }
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/MaterialManager.h",
                          56, "Unable to find material by ID (%i), using default...", arg1);
            }
        }
        return (Material*)m_defaultMaterial;
    }

    // 0x10082c020
    bool MaterialManager::IsValidMaterial(int arg1) const {
        unsigned long uVar2;

        if (arg1 != -1) {
            uVar2 = field_528.end();
            if ((unsigned long)(long)arg1 < uVar2) {
                if (MaterialsReady() == '\0') {
                    LogAssert("MaterialsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/MaterialManager.h",
                              76, nullptr);
                }
                return ((Skybox*)field_528[(long)arg1])->ShowSkybox();
            }
        }
        return 0;
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001c3ad0
    void OSRenderCore_TextureDataProvider::HandleRebuild(MapRebuildResults& mapRebuildResults) {
        int* arg1;
        ReturnValue local_60;

        auto local_48 = mapRebuildResults.field_104.begin();
        auto local_38 = mapRebuildResults.field_104.end();
        bool cVar1 = local_48 != local_38;
        if (cVar1) {
            do {
                arg1 = (int*)local_48.HeapBeginPtr();
                eastl::hashtable<
                    int, eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>, eastl::allocator,
                    eastl::use_first<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::emplace<int const&,
                                                                            shared_ptr<PacketJ<Array<unsigned char>>>>(
                    &local_60,
                    (hashtable<int, eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>, eastl::allocator,
                               eastl::use_first<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>>,
                               eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_16,
                    arg1, (shared_ptr<PacketJ<Array<unsigned char> _> _>*)(arg1 + 2));
                ++local_48;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
    }

} // namespace jag::oldscape::rseven

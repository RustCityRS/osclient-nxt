// libs/graphics/runetek7/materials/MaterialManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class MaterialManager {
    public:
        byte MaterialsReady() const;
        ~MaterialManager();
        MaterialManager();
        GetDefaultMaterial() const;
        GetMaterial(int) const;
        IsValidMaterial(int) const;
        void Initialise(MaterialRawProvider*);
        void Destroy();
        void Serialise(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        void MainLogic();

        // data members, from how the methods use this: 536 bytes
        EntityHighlight** field_0; // offset 0
        uint field_8;              // offset 8
        uint field_12;             // offset 12
        char _unknown_16[272];
        undefined4 field_288; // offset 288
        uint field_292;       // offset 292
        char _unknown_296[8];
        Material m_defaultMaterial; // offset 304
        char _unknown_520[16];
    };

    // 0x1001c3ab0, 32 bytes, inline, placed by class name and debug map
    // MaterialManager::MaterialsReady() const
    byte MaterialManager::MaterialsReady() {
        byte bVar1;

        bVar1 = (&field_528)->empty();
        return bVar1 ^ 1;
    }

    // 0x1001e0e20, 16 bytes, complete-object destructor, inline, placed by class name
    // MaterialManager::~MaterialManager(): jumps straight to the base-object destructor

    // 0x1001e0e30, 48 bytes, base-object destructor, inline, placed by class name
    // MaterialManager::~MaterialManager()
    void MaterialManager::~MaterialManager() {
        (&field_528)->~Array();
        ~MaterialRawLoader();
    }

    // 0x1001e1390, 16 bytes, complete-object constructor, inline, placed by class name
    // MaterialManager::MaterialManager(): jumps straight to the base-object constructor

    // 0x1001e13b0, 64 bytes, base-object constructor, inline, placed by class name
    // MaterialManager::MaterialManager()
    void MaterialManager::MaterialManager() {
        new (this) MaterialRawLoader();
        new (m_defaultMaterial) Material();
        new (&field_528) Array<Material, eastl::allocator>();
    }

    // 0x1007ba4c0, 208 bytes, inline, placed by class name
    // MaterialManager::GetMaterial(int) const
    undefined1* MaterialManager::GetMaterial(int param_1) {
        char cVar1;
        ulong uVar2;
        Skybox* this_00;
        undefined1* puVar3;
        undefined8 uVar4;

        if (param_1 != -1) {
            puVar3 = &field_528;
            uVar2 = puVar3->end();
            if ((ulong)param_1 < uVar2) {
                cVar1 = MaterialsReady(this);
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("MaterialsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/MaterialManager.h",
                              53, (char*)0);
                }
                this_00 = (Skybox*)Array<Material, eastl::allocator>::operator[](
                    (Array<Material, eastl::allocator>*)puVar3, (ulong)param_1);
                cVar1 = this_00->ShowSkybox();
                if (cVar1 != '\0') {
                    puVar3 = (undefined1*)Array<Material, eastl::allocator>::operator[](
                        (Array<Material, eastl::allocator>*)puVar3, (ulong)param_1);
                    return puVar3;
                }
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/MaterialManager.h",
                                    56, "Unable to find material by ID (%i), using default...", param_1);
            }
        }
        return m_defaultMaterial;
    }

    // 0x10082c020, 128 bytes, inline, placed by class name
    // MaterialManager::IsValidMaterial(int) const
    undefined8 MaterialManager::IsValidMaterial(int param_1) {
        ulong uVar2;
        Skybox* this_00;

        if (param_1 != -1) {
            uVar2 = (&field_528)->end();
            if ((ulong)(long)param_1 < uVar2) {
                if (MaterialsReady(this) == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("MaterialsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/MaterialManager.h",
                              76, (char*)0);
                }
                this_00 = (Skybox*)Array<Material, eastl::allocator>::operator[](
                    (Array<Material, eastl::allocator>*)&field_528, (long)param_1);
                return this_00->ShowSkybox();
            }
        }
        return 0;
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001c3ad0, 160 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::HandleRebuild(MapRebuildResults&)
    void OSRenderCore_TextureDataProvider::HandleRebuild(MapRebuildResults* param_1) {
        bool bVar1;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int local_60[6];
        eastl local_48[16];
        hashtable_iterator_base local_38[16];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_48, local_38, extraout_RDX);
        if (bVar1) {
            do {
                local_48->HeapBeginPtr();
                eastl::hashtable<
                    int, eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>>,
                    eastl::allocator,
                    eastl::use_first<
                        eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::
                    emplace<int const&, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>(
                        local_60, (shared_ptr*)&param_1->field_16);
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
                operator++((hashtable_iterator<
                            eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                            false>*)local_48);
                bVar1 = eastl::operator!=(local_48, local_38, extraout_RDX_00);
            } while (bVar1);
        }
    }

} // namespace jag::oldscape::rseven

// libs/graphics/runetek7/materials/RT7MaterialRawProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class RT7MaterialRawProvider {
    public:
        // virtual methods in vtable order
        virtual ~RT7MaterialRawProvider();
        virtual bool IsReady();
        virtual uint GetMaximumMaterialRawId();
        virtual ulong GetMaterialRaw(MaterialRaw&, unsigned int);
        virtual GetMaterialsArchiveSettings() const;
        RT7MaterialRawProvider(Js5ResourceProvider*, Js5ArchiveSettings const*);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0;          // offset 0, vtable pointer
        Js5ResourceProvider* field_8; // offset 8
        Js5ArchiveSettings* field_16; // offset 16
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    RT7MaterialRawProvider::~RT7MaterialRawProvider();

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    RT7MaterialRawProvider::GetMaterialsArchiveSettings() const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    RT7MaterialRawProvider::~RT7MaterialRawProvider();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    RT7MaterialRawProvider::~RT7MaterialRawProvider();

    // 0x1008c74b0, 160 bytes, base-object constructor, placed by class name and debug map
    // RT7MaterialRawProvider::RT7MaterialRawProvider(Js5ResourceProvider*, Js5ArchiveSettings const*)
    void RT7MaterialRawProvider::RT7MaterialRawProvider(Js5ResourceProvider* param_1, Js5ArchiveSettings* param_2) {
        new (this) MaterialRawProvider();
        field_0 = &PTR__ScriptOption_100f184b0;
        field_8 = param_1;
        field_16 = param_2;
        if (param_1 == (Js5ResourceProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("resourceProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RT7MaterialRawProvider.cpp",
                      15, (char*)0);
        }
        if (param_2 == (Js5ArchiveSettings*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("materialsArchive != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RT7MaterialRawProvider.cpp",
                      16, (char*)0);
        }
    }

    // 0x1008c7550, 16 bytes, complete-object constructor, placed by class name and debug map
    // RT7MaterialRawProvider::RT7MaterialRawProvider(Js5ResourceProvider*, Js5ArchiveSettings const*): jumps straight to the base-object constructor

    // 0x1008c7560, 64 bytes, placed by class name and debug map
    // RT7MaterialRawProvider::IsReady()
    bool RT7MaterialRawProvider::IsReady() {
        undefined* puVar1;

        puVar1 = (undefined*)(field_8, field_16, 0, (Priority*)Priority::HIGH, true)->GroupReady();
        return puVar1 == DataStatus::READY;
    }

    // 0x1008c75a0, 96 bytes, placed by class name and debug map
    // RT7MaterialRawProvider::GetMaximumMaterialRawId()
    uint RT7MaterialRawProvider::GetMaximumMaterialRawId() {
        uint uVar1;
        undefined* puVar2;
        Js5Index* local_18;

        local_18 = (Js5Index*)0;
        puVar2 = (undefined*)(*(code*)field_8->field_0[4])(field_8, &local_18, field_16);
        uVar1 = 4294967295;
        if (puVar2 == DataStatus::READY) {
            uVar1 = local_18->GetFileCount(0);
            uVar1 = -(uint)(uVar1 == 0) | uVar1;
        }
        return uVar1;
    }

    // 0x1008c7600, 192 bytes, placed by class name and debug map
    // RT7MaterialRawProvider::GetMaterialRaw(MaterialRaw&, unsigned int)
    ulong RT7MaterialRawProvider::GetMaterialRaw(MaterialRaw* param_1, uint param_2) {
        undefined* puVar1;
        undefined* puVar2;
        PacketT* pPVar3;
        shared_ptr local_38;

        new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        puVar2 = (undefined*)(field_8, &local_38, field_16, 0, param_2, (Priority*)Priority::HIGH, true, false, false)
                     ->GetFile();
        puVar1 = DataStatus::READY;
        if (puVar2 == DataStatus::READY) {
            pPVar3 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_38);
            param_1->Decode(param_2, pPVar3);
        }
        local_38.~shared_ptr();
        return CONCAT71((int7)((ulong)puVar1 >> 8), puVar2 == puVar1) & 4294967295;
    }

} // namespace jag::graphics

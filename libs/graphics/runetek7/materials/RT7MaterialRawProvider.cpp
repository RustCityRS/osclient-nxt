// libs/graphics/runetek7/materials/RT7MaterialRawProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class RT7MaterialRawProvider {
    public:
        // virtual methods in vtable order
        virtual ~RT7MaterialRawProvider();
        virtual bool IsReady();
        virtual unsigned int GetMaximumMaterialRawId();
        virtual unsigned long GetMaterialRaw(MaterialRaw& materialRaw, unsigned int arg2);
        virtual Js5ArchiveSettings* GetMaterialsArchiveSettings() const;
        RT7MaterialRawProvider(Js5ResourceProvider* js5ResourceProvider, const Js5ArchiveSettings* js5ArchiveSettings);

    private:
        Js5ResourceProvider* field_8;
        Js5ArchiveSettings* m_materialsArchiveSettings;
    };

    // 0x100022b10: RT7MaterialRawProvider::~RT7MaterialRawProvider() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100023f30: RT7MaterialRawProvider::GetMaterialsArchiveSettings() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x10002a770: RT7MaterialRawProvider::~RT7MaterialRawProvider() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008c74b0
    RT7MaterialRawProvider::RT7MaterialRawProvider(Js5ResourceProvider* js5ResourceProvider,
                                                   const Js5ArchiveSettings* js5ArchiveSettings)
        : MaterialRawProvider(), field_8(js5ResourceProvider), m_materialsArchiveSettings(js5ArchiveSettings) {
        if (js5ResourceProvider == nullptr) {
            LogAssert("resourceProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RT7MaterialRawProvider.cpp",
                      15, nullptr);
        }
        if (js5ArchiveSettings == nullptr) {
            LogAssert("materialsArchive != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/RT7MaterialRawProvider.cpp",
                      16, nullptr);
        }
    }

    // 0x1008c7560
    bool RT7MaterialRawProvider::IsReady() {
        return (uint8_t*)field_8->GroupReady(*m_materialsArchiveSettings, 0, (Priority*)Priority::HIGH, true) ==
               DataStatus::READY;
    }

    // 0x1008c75a0
    unsigned int RT7MaterialRawProvider::GetMaximumMaterialRawId() {
        uint64_t extraout_var;

        Js5Index* local_18 = nullptr;
        uint8_t uVar1 = (**(void (**)(...)) & ((Js5Index*)field_8->_vptr)->m_indexVersion)(
            (Js5Index**)field_8, (Js5ArchiveSettings*)&local_18);
        unsigned int uVar2 = 4294967295;
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
            uVar2 = local_18->GetFileCount(0);
            uVar2 = -(unsigned int)(uVar2 == 0) | uVar2;
        }
        return uVar2;
    }

    // 0x1008c7600
    unsigned long RT7MaterialRawProvider::GetMaterialRaw(MaterialRaw& materialRaw, unsigned int arg2) {
        PacketT<Array<unsigned char> _>* arg2_00;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        auto puVar2 = field_8->GetFile(local_38, *m_materialsArchiveSettings, 0, arg2, (Priority*)Priority::HIGH, true,
                                       false, false);
        uint8_t* puVar1 = DataStatus::READY;
        if (puVar2 == DataStatus::READY) {
            arg2_00 = (PacketT<Array<unsigned char> _>*)*local_38;
            materialRaw.Decode(arg2, *arg2_00);
        }
        return puVar2 == puVar1 & 4294967295;
    }

} // namespace jag::graphics

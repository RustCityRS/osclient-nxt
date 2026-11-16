// projects/osclient/OldscapeJs5ResourceProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OldscapeJs5ResourceProvider.h"

namespace jag::oldscape::js5 {
    // 0x10018a080
    OldscapeJs5ResourceProvider::OldscapeJs5ResourceProvider(SystemSettings* systemSettings,
                                                             jagex3::Js5Loader& js5Loader) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        eastl::string local_d0("storename");
        eastl::string local_a8("binaryUrl1");
        eastl::string local_88("httpurl");
        VBOMapper local_68;
        eastl::string local_f0("");
        new (this) Js5ResourceProvider(local_d0, local_a8, local_88, systemSettings, local_68, 0, emptyArchiveSettings,
                                       true, nullptr, nullptr, local_f0);
        field_66352 = js5Loader;
        new (&field_66360) Array<std::unique_ptr<OldscapeToNxtJs5Index>>();
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)second();
        if (*midiPlayerMainThread != nullptr) {
            ((Task*)(*midiPlayerMainThread).operator->())->EndTask();
        }
    }

    // 0x10018a7d0
    void OldscapeJs5ResourceProvider::IndexReady(const Js5ArchiveSettings& js5ArchiveSettings) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        25, "NYI");
    }

    // 0x10018a800
    void OldscapeJs5ResourceProvider::GetIndex(Js5Index** arg1, const Js5ArchiveSettings& js5ArchiveSettings) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        32, "NYI");
    }

    // 0x10018a830
    uint8_t* OldscapeJs5ResourceProvider::GetIndex(const Js5Index** arg1,
                                                   const Js5ArchiveSettings& js5ArchiveSettings) {
        bool cVar2;
        uint8_t** ppuVar4;
        unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index> _>* oldscapeToNxtJs5Index;
        shared_ptr<jagex3::Js5>* this_01;
        Js5* pJVar5;
        unique_ptr<OldscapeToNxtJs5Index>* puVar6;
        Js5Index* pJVar7;
        uint8_t* in_RCX;
        void* arg2;
        void* arg1_00;
        ReturnValue local_38;

        auto js5ArchiveId = js5ArchiveSettings.GetX();
        uint8_t* this_00 = &field_66360;
        if (this_00->end() <= (int)js5ArchiveId) {
            if (21 < (int)js5ArchiveId) {
                LogAssert("archiveId < jagex3::Js5ArchiveId::ID_LIMIT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "OldscapeJs5ResourceProvider.cpp",
                          41, nullptr);
            }
            this_00->set_max_size(22, 3);
        }
        if ((int)js5ArchiveId < 22) {
            arg1_00 = (void*)(unsigned long)js5ArchiveId;
            arg2 = arg1_00;
            oldscapeToNxtJs5Index =
                (unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index> _>*)(*this_00)[(
                    unsigned long)arg1_00];
            if (oldscapeToNxtJs5Index == arg2) {
                this_01 = (shared_ptr<jagex3::Js5>*)field_66352->GetJs5(js5ArchiveId);
                pJVar5 = (Js5*)(*this_01).operator->();
                cVar2 = pJVar5->GetIndexIsReady();
                if (!cVar2) {
                    return DataStatus::NOTLOADED;
                }
                pJVar5 = (Js5*)**this_01;
                local_38 = std::make_unique<OldscapeToNxtJs5Index, jagex3::Js5&>(*pJVar5);
                puVar6 = (unique_ptr<OldscapeToNxtJs5Index>*)(*this_00)[(unsigned long)arg1_00];
                *puVar6 = local_38;
                if (!cVar2) {
                    return in_RCX;
                }
            }
            puVar6 = (unique_ptr<OldscapeToNxtJs5Index>*)(*this_00)[(unsigned long)arg1_00];
            pJVar7 = (Js5Index*)puVar6->get();
            *arg1 = pJVar7;
            ppuVar4 = &DataStatus::READY;
        } else {
            ppuVar4 = &DataStatus::MISSING;
        }
        return *ppuVar4;
    }

    // 0x10018acc0
    void OldscapeJs5ResourceProvider::GetMasterIndex(const Js5MasterIndex** arg1) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        68, "NYI");
    }

    // 0x10018acf0
    void OldscapeJs5ResourceProvider::FileReady(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                                unsigned int arg3, const Priority* priority, bool arg5) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        75, "NYI");
    }

    // 0x10018ad20
    void OldscapeJs5ResourceProvider::GroupPreloaded(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                                     bool arg3, bool& arg4) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        82, "NYI");
    }

    // 0x10018ad50
    void
    OldscapeJs5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(const Js5ArchiveSettings& js5ArchiveSettings) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        89, "NYI");
    }

} // namespace jag::oldscape::js5

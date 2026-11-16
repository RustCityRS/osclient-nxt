// projects/osclient/OldscapeJs5ResourceProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OldscapeJs5ResourceProvider.h"

namespace jag::oldscape::js5 {
    // 0x10018a080, 544 bytes, base-object constructor, placed by class name and debug map
    // OldscapeJs5ResourceProvider::OldscapeJs5ResourceProvider(SystemSettings*, jagex3::Js5Loader&)
    void OldscapeJs5ResourceProvider::OldscapeJs5ResourceProvider(SystemSettings* param_1, Js5Loader* param_2) {
        shared_ptr* this_00;
        Task* this_01;
        eastl::string local_f0[32];
        eastl::string local_d0[32];
        allocator local_b0[8];
        eastl::string local_a8[32];
        eastl::string local_88[32];
        VBOMapper local_68;
        allocator local_48[8];
        allocator local_40[8];
        allocator local_38[8];

        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        eastl::string::basic_string(local_d0, "storename", local_b0);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_a8, "binaryUrl1", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_88, "httpurl", local_40);
        new (&local_68) PacketT<Array<unsigned char, eastl::allocator>>();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_f0, "", local_38);
        new (this) Js5ResourceProvider(local_d0, local_a8, local_88, param_1, (PacketT*)&local_68, 0,
                                       (Js5ArchiveSetSettings*)&emptyArchiveSettings, true, 0, 0, local_f0);
        eastl::string::~basic_string(local_f0);
        local_68.~VBOMapper();
        eastl::string::~basic_string(local_88);
        eastl::string::~basic_string(local_a8);
        eastl::string::~basic_string(local_d0);
        field_0 = &PTR__OldscapeJs5ResourceProvider_100ef5cb8;
        field_66352 = param_2;
        new (&field_66360) Array<std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>,
                                 eastl::allocator>();
        this_00 = (shared_ptr*)second();
        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
            this_01 = (Task*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)this_00);
            this_01->EndTask();
        }
    }

    // 0x10018a7c0, 16 bytes, complete-object constructor, placed by class name
    // OldscapeJs5ResourceProvider::OldscapeJs5ResourceProvider(SystemSettings*, jagex3::Js5Loader&): jumps straight to the base-object constructor

    // 0x10018a7d0, 48 bytes, placed by class name
    // OldscapeJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)
    void OldscapeJs5ResourceProvider::IndexReady(Js5ArchiveSettings* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        25, "NYI");
    }

    // 0x10018a800, 48 bytes, placed by class name
    // OldscapeJs5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&)
    void OldscapeJs5ResourceProvider::GetIndex(Js5Index** param_1, Js5ArchiveSettings* param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        32, "NYI");
    }

    // 0x10018a830, 336 bytes, placed by class name
    // OldscapeJs5ResourceProvider::GetIndex(Js5Index const**, Js5ArchiveSettings const&)
    undefined* OldscapeJs5ResourceProvider::GetIndex(Js5Index** param_1, Js5ArchiveSettings* param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        undefined** ppuVar5;
        unique_ptr* puVar6;
        shared_ptr<jagex3::Js5>* this_01;
        Js5* this_02;
        unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>* puVar7;
        Js5Index* pJVar8;
        undefined* in_RCX;
        _func_decltype_nullptr* p_Var9;
        _func_decltype_nullptr* p_Var10;
        unique_ptr local_38[8];

        uVar3 = param_2->GetX();
        this_00 = &field_66360;
        iVar4 = this_00->end();
        if (iVar4 <= (int)uVar3) {
            if (21 < (int)uVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("archiveId < jagex3::Js5ArchiveId::ID_LIMIT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "OldscapeJs5ResourceProvider.cpp",
                          41, (char*)0);
            }
            this_00->set_max_size(22, 3);
        }
        if ((int)uVar3 < 22) {
            p_Var10 = (_func_decltype_nullptr*)(ulong)uVar3;
            p_Var9 = p_Var10;
            puVar6 =
                (unique_ptr*)Array<std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>,
                                   eastl::allocator>::
                operator[]((Array<std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>,
                                  eastl::allocator>*)this_00,
                           (ulong)p_Var10);
            bVar1 = std::operator==(puVar6, p_Var9);
            if (bVar1) {
                this_01 = (shared_ptr<jagex3::Js5>*)(field_66352, uVar3)->GetJs5();
                this_02 = (Js5*)shared_ptr<jagex3::Js5>::operator->(this_01);
                cVar2 = this_02->GetIndexIsReady();
                if (cVar2 == '\0') {
                    return DataStatus::NOTLOADED;
                }
                shared_ptr<jagex3::Js5>::operator*(this_01);
                std::make_unique<OldscapeToNxtJs5Index, jagex3::Js5&>((Js5*)local_38);
                puVar7 = (unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>*)
                    Array<std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>,
                          eastl::allocator>::
                    operator[](
                        (Array<std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>,
                               eastl::allocator>*)this_00,
                        (ulong)p_Var10);
                std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>::operator=(puVar7,
                                                                                                              local_38);
                local_38->~unique_ptr();
                if (cVar2 == '\0') {
                    return in_RCX;
                }
            }
            puVar7 = (unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>*)Array<
                std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>, eastl::allocator>::
            operator[]((Array<std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>,
                              eastl::allocator>*)this_00,
                       (ulong)p_Var10);
            pJVar8 = (Js5Index*)std::unique_ptr<OldscapeToNxtJs5Index, std::default_delete<OldscapeToNxtJs5Index>>::get(
                puVar7);
            *param_1 = pJVar8;
            ppuVar5 = &DataStatus::READY;
        } else {
            ppuVar5 = &DataStatus::MISSING;
        }
        return *ppuVar5;
    }

    // 0x10018acc0, 48 bytes, placed by class name
    // OldscapeJs5ResourceProvider::GetMasterIndex(Js5MasterIndex const**) const
    void OldscapeJs5ResourceProvider::GetMasterIndex(Js5MasterIndex** param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        68, "NYI");
    }

    // 0x10018acf0, 48 bytes, placed by class name
    // OldscapeJs5ResourceProvider::FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool)
    void OldscapeJs5ResourceProvider::FileReady(Js5ArchiveSettings* param_1, uint param_2, uint param_3,
                                                Priority* param_4, bool param_5) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        75, "NYI");
    }

    // 0x10018ad20, 48 bytes, placed by class name
    // OldscapeJs5ResourceProvider::GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&)
    void OldscapeJs5ResourceProvider::GroupPreloaded(Js5ArchiveSettings* param_1, uint param_2, bool param_3,
                                                     bool* param_4) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        82, "NYI");
    }

    // 0x10018ad50, 48 bytes, placed by class name
    // OldscapeJs5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&)
    void OldscapeJs5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "OldscapeJs5ResourceProvider.cpp",
                        89, "NYI");
    }

} // namespace jag::oldscape::js5

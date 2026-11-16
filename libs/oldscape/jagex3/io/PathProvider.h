// libs/oldscape/jagex3/io/PathProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class PathProvider {
    public:
        GetPublicStorage();
        PathProvider* GetPictureStorage();
        ulong WriteToPublicStorage(Filename const&, Filename&, char const*, Error&);
        PathProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x10014cf50, 32 bytes, inline, placed by class name and debug map
    // PathProvider::GetPublicStorage()
    PathProvider* PathProvider::GetPublicStorage() {
        long* in_RSI;

        (**(code**)(*in_RSI + 8))();
        return this;
    }

    // 0x10014cf70, 48 bytes, inline, placed by class name and debug map
    // PathProvider::GetPictureStorage()
    PathProvider* PathProvider::GetPictureStorage() {
        Filename* pFVar1;

        pFVar1 = (Filename*)GetUserPicturesFolder();
        new (this) Filename(pFVar1);
        return this;
    }

    // 0x10014cfa0, 432 bytes, inline, placed by class name and debug map
    // PathProvider::WriteToPublicStorage(Filename const&, Filename&, char const*, Error&)
    ulong PathProvider::WriteToPublicStorage(Filename* param_1, Filename* param_2, char* param_3, Error* param_4) {
        char cVar1;
        ClientCompositeZone* this_00;
        File* pFVar3;
        ulong uVar4;
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(field_0 + 24))(local_298, this);
        Filename::operator/(local_168, local_298);
        Filename::operator=(param_2, local_168);
        local_168->~pair();
        local_298->~pair();
        local_168->GetParentPath();
        cVar1 = local_168->CreateDirectories(param_4);
        local_168->~pair();
        if (cVar1 == '\0') {
            uVar4 = 0;
            goto LAB_10014d0d2;
        }
        local_298[0]._0_8_ = param_4;
        std::make_unique<File, Filename&, int const&, Error*>(local_168, (int*)param_2, (Error**)local_298);
        if (local_168->operator_cast_to_bool()) {
            this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)local_168);
            cVar1 = this_00->IsValid();
            if (cVar1 == '\0')
                goto LAB_10014d0c4;
            pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)local_168);
            pFVar3->write(param_3, 0);
            pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)local_168);
            uVar4 = CONCAT71((int7)((ulong)local_168 >> 8), 1);
            pFVar3->close(0);
        } else {
        LAB_10014d0c4:
            uVar4 = 0;
        }
        local_168->~unique_ptr();
    LAB_10014d0d2:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4 & 4294967295;
    }

    // 0x10014d3e0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // PathProvider::PathProvider()
    void PathProvider::PathProvider() {
        field_0 = PTR_vtable_100ee89f0 + 16;
    }

} // namespace jag::oldscape::jagex3

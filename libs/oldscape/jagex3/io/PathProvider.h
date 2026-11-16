// libs/oldscape/jagex3/io/PathProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class PathProvider {
    public:
        PathProvider* GetPublicStorage();
        PathProvider* GetPictureStorage();
        unsigned long WriteToPublicStorage(const Filename& filename1, Filename& filename2, const char* str,
                                           Error& error);
        PathProvider();
    };

    // 0x10014cf50
    PathProvider* PathProvider::GetPublicStorage() {
        long* in_RSI;

        (**(void (**)(...))(*in_RSI + 8))();
        return this;
    }

    // 0x10014cf70
    PathProvider* PathProvider::GetPictureStorage() {
        auto filename = SystemPaths::GetUserPicturesFolder();
        new (this) Filename(filename);
        return this;
    }

    // 0x10014cfa0
    unsigned long PathProvider::WriteToPublicStorage(const Filename& filename1, Filename& filename2, const char* str,
                                                     Error& error) {
        File* pFVar2;
        unsigned long uVar3;
        Error* local_298[38];

        (**(void (**)(...))(field_0 + 24))((Filename*)local_298, this);
        auto local_168 = *local_298 / filename1;
        filename2 = local_168;
        local_168 = filename2.GetParentPath();
        bool cVar1 = local_168.CreateDirectories(error);
        if (!cVar1) {
            uVar3 = 0;
            goto LAB_10014d0d2;
        }
        local_298[0] = error;
        std::make_unique<File, Filename&, int const&, Error*>(local_168, filename2, *local_298);
        cVar1 = std::unique_ptr::operator_cast_to_bool(&local_168);
        if (!cVar1) {
        LAB_10014d0c4:
            uVar3 = 0;
        } else {
            cVar1 = ((ClientCompositeZone*)local_168.operator->())->IsValid();
            if (!cVar1)
                goto LAB_10014d0c4;
            pFVar2 = (File*)local_168.operator->();
            pFVar2->write(str, nullptr);
            pFVar2 = (File*)local_168.operator->();
            uVar3 = (((uint64_t)((int64_t)((unsigned long)&local_168 >> 8)) << 8) | (uint8_t)1);
            pFVar2->close(nullptr);
        }
    LAB_10014d0d2:
        return uVar3 & 4294967295;
    }

    // 0x10014d3e0
    PathProvider::PathProvider() {
        field_0 = PTR_vtable_100ee89f0 + 16;
    }

} // namespace jag::oldscape::jagex3

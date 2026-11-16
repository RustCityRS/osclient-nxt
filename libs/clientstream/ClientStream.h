// libs/clientstream/ClientStream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ClientStream {
    public:
        uint GetConnectionStatus();
        void GetInBufferSize() const;
        unsigned long
        Read<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                                                  unsigned long);
        WaterNormalParamsTarget GetError() const;
        void Write(PacketT<Array<unsigned char, eastl::allocator>>&);
        void Close();
        long GetAvailable();
        unsigned long
        Read<PacketT<Array<unsigned char, eastl::allocator>>>(PacketT<Array<unsigned char, eastl::allocator>>&,
                                                              unsigned long);
        void Drop();
        ClientStream(char const*, int, int, int, int, bool);
        ~ClientStream();
        GetPing();
        ulong Read(unsigned char*, unsigned long);
        void Service();
        ulong Write(unsigned char const*, unsigned long);
        void Flush();
        void GetProfiling(unsigned int*, unsigned int*, unsigned int*, unsigned long long*, unsigned long long*,
                          unsigned int*, unsigned int*, unsigned int*);
        static /* 64 bytes */ m_connectionPingMutex; // initialised in its definition
        static /* 8 bytes */ m_ReadsFromClient;
        static /* 8 bytes */ m_WritesFromClient;
        static /* 8 bytes */ m_TotalBytesRead;
        static /* 8 bytes */ m_TotalBytesWritten;
        static /* 8 bytes */ m_LastAvailable;
        static /* 8 bytes */ m_SendTime;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_connectionPing;

        // data members, from how the methods use this: 520 bytes
        uint m_connectionStatus; // offset 0
        char _unknown_4[140];
        undefined1 field_144; // offset 144
        char _unknown_145[55];
        Error field_200; // offset 200
        char _unknown_204[60];
        bool field_264; // offset 264
        char _unknown_265[3];
        WaterNormalParamsTarget m_error; // offset 268
        char _unknown_284[236];
    };

    // 0x1004a2630, 32 bytes, inline, placed by class name and debug map
    // ClientStream::GetInBufferSize() const
    void ClientStream::GetInBufferSize() {
        (&field_144)->GetAuthWrapper();
    }

    // 0x1004a26d0, 112 bytes, inline, placed by class name and debug map
    // unsigned long ClientStream::Read<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, unsigned long)
    ulong ClientStream::Read<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(PacketT* param_1, ulong param_2) {
        long lVar1;
        long lVar2;
        ulong uVar3;

        lVar1 = param_1->GetDataPtr();
        lVar2 = param_1->size();
        uVar3 = Read(this, (uchar*)(lVar1 + lVar2), param_2);
        if (uVar3 != 0) {
            lVar1 = param_1->size();
            param_1->SetPos(uVar3 + lVar1);
        }
        return uVar3;
    }

    // 0x1009f26f0, 64 bytes, inline, placed by class name
    // ClientStream::Write(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ClientStream::Write(PacketT* param_1) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)param_1->GetDataPtr();
        uVar2 = param_1->GetTextureAtlas();
        Write(this, puVar1, uVar2);
    }

    // 0x1009f2bc0, 64 bytes, inline, placed by class name
    // ClientStream::Close()
    void ClientStream::Close() {
        (&field_8, (Error*)0)->Close();
        (&field_144)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_connectionStatus = 0;
    }

    // 0x1009f3560, 256 bytes, inline, placed by class name
    // ClientStream::GetAvailable()
    long ClientStream::GetAvailable() {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Error local_50[8];

        this_00 = &field_8;
        cVar1 = this_00->IsOpen();
        if (cVar1 != '\0') {
            lVar2 = this_00->Available(m_error);
            cVar1 = m_error->IsValid();
            if (cVar1 == '\0')
                goto LAB_1009f361e;
            uVar3 = logger::default_logger();
            this_00->GetCursorMutex();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_50->GetErrorString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/clientstream/"
                                "standard/standard_ClientStream_impl.h",
                                17, "Socket error (%s) : %s", uVar4, uVar5);
            local_50->~basic_string();
            Close(this);
        }
        lVar2 = 0;
    LAB_1009f361e:
        return (&field_144)->GetAuthWrapper() + lVar2;
    }

    // 0x1009f3660, 112 bytes, inline, placed by class name
    // unsigned long ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator> > >(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned long)
    ulong ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator>>>(PacketT* param_1, ulong param_2) {
        long lVar1;
        long lVar2;
        ulong uVar3;

        lVar1 = param_1->GetDataPtr();
        lVar2 = param_1->size();
        uVar3 = Read(this, (uchar*)(lVar1 + lVar2), param_2);
        if (uVar3 != 0) {
            lVar1 = param_1->size();
            param_1->SetPos(uVar3 + lVar1);
        }
        return uVar3;
    }

    // 0x1009f46f0, 48 bytes, inline, placed by class name
    // ClientStream::Drop()
    void ClientStream::Drop() {
        (&field_8, (Error*)0)->Close();
        m_connectionStatus = 0;
    }

} // namespace jag

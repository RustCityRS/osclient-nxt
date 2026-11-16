// libs/clientstream/ClientStream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ClientStream {
    public:
        unsigned int GetConnectionStatus();
        void GetInBufferSize() const;
        unsigned long Read<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1, unsigned long arg2);
        WaterNormalParamsTarget GetError() const;
        void Write(PacketT<Array<unsigned char>>& arg1);
        void Close();
        long GetAvailable();
        unsigned long Read<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1, unsigned long arg2);
        void Drop();
        ClientStream(const char* str, int arg2, int arg3, int arg4, int arg5, bool arg6);
        ~ClientStream();
        uint32_t GetPing();
        unsigned long Read(unsigned char* arg1, unsigned long arg2);
        void Service();
        unsigned long Write(const unsigned char* arg1, unsigned long arg2);
        void Flush();
        void GetProfiling(unsigned int* arg1, unsigned int* arg2, unsigned int* arg3, unsigned long long* arg4,
                          unsigned long long* arg5, unsigned int* arg6, unsigned int* arg7, unsigned int* arg8);
        static int32_t m_connectionPingMutex[16]; // initialised in its definition
        static int64_t m_ReadsFromClient;
        static int64_t m_WritesFromClient;
        static int64_t m_TotalBytesRead;
        static int64_t m_TotalBytesWritten;
        static int64_t m_LastAvailable;
        static int64_t m_SendTime;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            m_connectionPing; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        unsigned int m_connectionStatus;
        uint8_t _unknown_4[196];
        uint32_t field_200;
        uint8_t _unknown_204[4];
        uint8_t field_208;
        uint8_t _unknown_209[55];
        bool field_264;
        uint8_t _unknown_265[3];
        WaterNormalParamsTarget m_error;
        uint8_t _unknown_284[236];
    };

    // 0x1004a2630
    void ClientStream::GetInBufferSize() const {
        field_144.GetAuthWrapper();
    }

    // 0x1004a26d0
    unsigned long ClientStream::Read<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, unsigned long arg2) {
        long lVar1 = arg1.GetDataPtr();
        long lVar2 = arg1.size();
        unsigned long uVar3 = Read((lVar1 + lVar2), arg2);
        if (uVar3 != 0) {
            lVar1 = arg1.size();
            arg1.SetPos(uVar3 + lVar1);
        }
        return uVar3;
    }

    // 0x1009f26f0
    void ClientStream::Write(PacketT<Array<unsigned char>>& arg1) {
        auto arg1_00 = arg1.GetDataPtr();
        unsigned long arg2 = arg1.GetTextureAtlas();
        Write(arg1_00, arg2);
    }

    // 0x1009f2bc0
    void ClientStream::Close() {
        field_8.Close(nullptr);
        field_144.clear();
        field_232.clear();
        m_connectionStatus = 0;
    }

    // 0x1009f3560
    long ClientStream::GetAvailable() {
        uint8_t* this_01;
        long lVar2;
        Logger* this_02;
        uint64_t uVar3;
        uint64_t uVar4;
        ReturnValue local_50;

        uint8_t* this_00 = &field_8;
        bool cVar1 = this_00->IsOpen();
        if (cVar1) {
            this_01 = m_error;
            lVar2 = this_00->Available(this_01);
            cVar1 = this_01->IsValid();
            if (!cVar1)
                goto LAB_1009f361e;
            this_02 = logger::default_logger();
            this_00->GetCursorMutex();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_50 = this_01->GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_02->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/clientstream/standard/"
                         "standard_ClientStream_impl.h",
                         17, "Socket error (%s) : %s", uVar3, uVar4);
            Close();
        }
        lVar2 = 0;
    LAB_1009f361e:
        return field_144.GetAuthWrapper() + lVar2;
    }

    // 0x1009f3660
    unsigned long ClientStream::Read<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1,
                                                                    unsigned long arg2) {
        long lVar1 = arg1.GetDataPtr();
        long lVar2 = arg1.size();
        unsigned long uVar3 = Read((lVar1 + lVar2), arg2);
        if (uVar3 != 0) {
            lVar1 = arg1.size();
            arg1.SetPos(uVar3 + lVar1);
        }
        return uVar3;
    }

    // 0x1009f46f0
    void ClientStream::Drop() {
        field_8.Close(nullptr);
        m_connectionStatus = 0;
    }

} // namespace jag

// libs/js5/network/Js5NetQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5NetQueue {
    public:
        void TidyupConnection();
        ~Js5NetQueue();
        Js5NetQueue();
        void ProvideConnection(shared_ptr<ClientStream>& clientStream, bool arg2);
        void RequestServerDrop();
        uint64_t RequestData(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
                             std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                PacketT<Array<unsigned char>>&&, bool)>
                                 callback,
                             PacketT<Array<unsigned char>>&& arg6, const Priority* priority);
        bool IsUrgentQueueFull() const;
        bool IsPrefetchQueueFull() const;
        void RecordCRCFailure();
        void SendPendingRequests(eastl::vector_map<int, Js5NetQueueRequest>& arg1);
        void SendRequest(Js5NetQueueRequest& js5NetQueueRequest);
        bool Service();
        void GetUrgentQueueSize() const;
        void GetPrefetchQueueSize() const;
        void FileComplete(Js5NetQueueRequest* js5NetQueueRequest, unsigned long arg2);
        uint32_t RequestData(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
                             std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                PacketT<Array<unsigned char>>&&, bool)>
                                 callback);

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[24];
        int field_40;
        uint8_t _unknown_44[36];
        shared_ptr field_80;
        unsigned long long field_96;
        VBOMapper field_104;
        VBOMapper field_136;
        VBOMapper field_168;
        unsigned int field_200;
        int field_204;
        vector<oldscape::dash3d::EntityHighlight*>* field_208;
        int field_216;
        uint8_t _unknown_220[4];
    };

    // 0x10019e0e0
    Js5NetQueue::~Js5NetQueue() {
        field_168->~VBOMapper();
        field_136->~VBOMapper();
        field_104->~VBOMapper();
        field_80->~shared_ptr();
    }

    // 0x1009f29e0
    bool Js5NetQueue::IsUrgentQueueFull() const {
        unsigned long uVar1 = GetUrgentQueueSize();
        return 499 < uVar1;
    }

    // 0x1009f2b60
    bool Js5NetQueue::IsPrefetchQueueFull() const {
        unsigned long uVar1 = GetPrefetchQueueSize();
        return 499 < uVar1;
    }

    // 0x1009f3540
    void Js5NetQueue::GetUrgentQueueSize() const {
        size();
    }

    // 0x1009f3550
    void Js5NetQueue::GetPrefetchQueueSize() const {
        field_40.size();
    }

    // 0x1009f47a0
    uint32_t Js5NetQueue::RequestData(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
                                      std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                         PacketT<Array<unsigned char>>&&, bool)>
                                          callback) {
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                      bool)>
            local_68[48];
        long local_38;

        unsigned int local_6c = arg3;
        new (local_68) std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                          PacketT<Array<unsigned char>>&&, bool)>(*callback);
        VBOMapper local_90;
        uint32_t uVar1 = RequestData(arg1, arg2, local_6c, arg4, local_68, local_90, (Priority*)Priority::LOW);
        return uVar1;
    }

} // namespace jag

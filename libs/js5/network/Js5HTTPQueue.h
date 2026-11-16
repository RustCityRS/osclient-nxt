// libs/js5/network/Js5HTTPQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5HTTPQueue {
    public:
        ~Js5HTTPQueue();
        unsigned int RequestData(unsigned int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5, bool arg6,
                                 std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                    PacketT<Array<unsigned char>>&&, bool)>
                                     callback1,
                                 std::function<void(unsigned int, unsigned int, bool)> callback2,
                                 PacketT<Array<unsigned char>>&& arg9, const Priority* priority);
        bool IsPrefetchQueueFull() const;
        uint64_t Service();
        void SendRequest(Js5HTTPQueueRequest* js5HTTPQueueRequest);
        uint32_t RequestData(unsigned int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5, bool arg6,
                             std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                PacketT<Array<unsigned char>>&&, bool)>
                                 callback1,
                             std::function<void(unsigned int, unsigned int, bool)> callback2);
        long GetPrefetchQueueSize() const;
        Js5HTTPQueue(eastl::string str);

    private:
        uint8_t _unknown_0[32];
        int field_32;
        uint8_t _unknown_36[100];
    };

    // 0x10019df20
    Js5HTTPQueue::~Js5HTTPQueue() {
        field_128.~basic_string();
        field_96.~basic_string();
        field_72.~Array();
    }

    // 0x1009f1710
    bool Js5HTTPQueue::IsPrefetchQueueFull() const {
        unsigned long uVar1 = GetPrefetchQueueSize();
        return 19 < uVar1;
    }

    // 0x1009f4920
    uint32_t Js5HTTPQueue::RequestData(unsigned int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5,
                                       bool arg6,
                                       std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                          PacketT<Array<unsigned char>>&&, bool)>
                                           callback1,
                                       std::function<void(unsigned int, unsigned int, bool)> callback2) {
        function<void(unsigned int, unsigned int, bool)> local_98[48];
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                      bool)>
            local_68[48];
        long local_38;

        unsigned int local_a4 = arg5;
        int local_a0 = arg4;
        int local_9c = arg3;
        new (local_68) std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                          PacketT<Array<unsigned char>>&&, bool)>(*callback1);
        new (local_98) std::function<void(unsigned int, unsigned int, bool)>(*callback2);
        VBOMapper local_c8;
        uint32_t uVar1 = RequestData(arg1, arg2, local_9c, local_a0, local_a4, arg6, local_68, local_98, local_c8,
                                     (Priority*)Priority::LOW);
        return uVar1;
    }

    // 0x1009f98c0
    long Js5HTTPQueue::GetPrefetchQueueSize() const {
        auto plVar1 = field_72.data();
        auto plVar2 = field_72.end();
        long lVar4 = 0;
        for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
            lVar4 = (lVar4 + 1) - (unsigned long)(*plVar1 == 0);
        }
        return field_32.size() + lVar4;
    }

    // 0x100a0b580
    Js5HTTPQueue::Js5HTTPQueue(eastl::string str) : eastl::string(*str) {
        field_32.reserve(4);
        field_72.set_max_size(4, 0);
    }

} // namespace jag

// libs/js5/network/Js5HTTPQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5HTTPQueue {
    public:
        ~Js5HTTPQueue();
        uint
        RequestData(unsigned int, unsigned int, int, int, unsigned int, bool,
                    std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                       PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>,
                    std::function<void(unsigned int, unsigned int, bool)>,
                    PacketT<Array<unsigned char, eastl::allocator>>&&, Priority const*);
        bool IsPrefetchQueueFull() const;
        Service();
        void SendRequest(Js5HTTPQueueRequest*);
        RequestData(unsigned int, unsigned int, int, int, unsigned int, bool,
                    std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                       PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>,
                    std::function<void(unsigned int, unsigned int, bool)>);
        long GetPrefetchQueueSize() const;
        Js5HTTPQueue(eastl::string);

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[136];
    };

    // 0x10019df10, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Js5HTTPQueue::~Js5HTTPQueue(): jumps straight to the base-object destructor

    // 0x10019df20, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // Js5HTTPQueue::~Js5HTTPQueue()
    void Js5HTTPQueue::~Js5HTTPQueue() {
        (&field_128)->~basic_string();
        (&field_96)->~basic_string();
        (&field_72)->~Array();
        (&field_32)->~vector_map();
        ~basic_string();
    }

    // 0x1009f1710, 32 bytes, inline, placed by class name
    // Js5HTTPQueue::IsPrefetchQueueFull() const
    bool Js5HTTPQueue::IsPrefetchQueueFull() {
        ulong uVar1;

        uVar1 = GetPrefetchQueueSize(this);
        return 19 < uVar1;
    }

    // 0x1009f4920, 320 bytes, inline, placed by class name
    // Js5HTTPQueue::RequestData(unsigned int, unsigned int, int, int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>, std::function<void (unsigned int, unsigned int, bool)>)
    /* Js5HTTPQueue::RequestData(unsigned int, unsigned int, int, int, unsigned int, bool,
   std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char,
   eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>,
   std::function<void (unsigned int, unsigned int, bool)>) */

    undefined4 Js5HTTPQueue::RequestData(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                         undefined4 param_5, undefined1 param_6, function* param_8, function* param_9) {
        undefined4 uVar1;
        VBOMapper local_c8;
        undefined4 local_a4;
        undefined4 local_a0;
        undefined4 local_9c;
        function<void(unsigned int, unsigned int, bool)> local_98[48];
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                      PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>
            local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a4 = param_5;
        local_a0 = param_4;
        local_9c = param_3;
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::function(local_68, param_8);
        std::function<void(unsigned int, unsigned int, bool)>::function(local_98, param_9);
        new (&local_c8) PacketT<Array<unsigned char, eastl::allocator>>();
        uVar1 = RequestData(this, param_1, param_2, local_9c, local_a0, local_a4, param_6, local_68, local_98,
                            &local_c8, Priority::LOW);
        local_c8.~VBOMapper();
        std::function<void(unsigned int, unsigned int, bool)>::~function(local_98);
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x1009f98c0, 96 bytes, inline, placed by class name
    // Js5HTTPQueue::GetPrefetchQueueSize() const
    long Js5HTTPQueue::GetPrefetchQueueSize() {
        long* plVar1;
        long* plVar2;
        long lVar3;
        long lVar4;

        plVar1 = (long*)(&field_72)->data();
        plVar2 = (long*)(&field_72)->end();
        lVar4 = 0;
        for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
            lVar4 = (lVar4 + 1) - (ulong)(*plVar1 == 0);
        }
        lVar3 = (&field_32)->size();
        return lVar3 + lVar4;
    }

    // 0x100a0b560, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5HTTPQueue::Js5HTTPQueue(eastl::string): jumps straight to the base-object constructor

    // 0x100a0b580, 208 bytes, base-object constructor, inline, placed by class name
    // Js5HTTPQueue::Js5HTTPQueue(eastl::string)
    void Js5HTTPQueue::Js5HTTPQueue(basic_string* param_2) {
        new (this) eastl::string(param_2);
        new (&field_32) eastl::vector_map<int, Js5HTTPQueueRequest*, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, Js5HTTPQueueRequest*>, eastl::allocator>>();
        new (&field_72) Array<Js5HTTPQueueRequest*, eastl::allocator>();
        new (&field_96) eastl::string();
        new (&field_128) eastl::string();
        (&field_32, 4)->reserve();
        (&field_72, 4, 0)->set_max_size();
    }

} // namespace jag

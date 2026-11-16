// libs/js5/network/Js5NetQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5NetQueue {
    public:
        TidyupConnection();
        ~Js5NetQueue();
        Js5NetQueue();
        void ProvideConnection(shared_ptr<ClientStream>&, bool);
        void RequestServerDrop();
        RequestData(unsigned int, unsigned int, unsigned int, bool,
                    std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                       PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>,
                    PacketT<Array<unsigned char, eastl::allocator>>&&, Priority const*);
        bool IsUrgentQueueFull() const;
        bool IsPrefetchQueueFull() const;
        void RecordCRCFailure();
        void
        SendPendingRequests(eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>&);
        void SendRequest(Js5NetQueueRequest&);
        bool Service();
        void GetUrgentQueueSize() const;
        void GetPrefetchQueueSize() const;
        void FileComplete(Js5NetQueueRequest*, unsigned long);
        RequestData(unsigned int, unsigned int, unsigned int, bool,
                    std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                       PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>);

        // data members, from how the methods use this: 224 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[64];
        shared_ptr field_80; // offset 80
        ulonglong field_96;  // offset 96
        VBOMapper field_104; // offset 104
        VBOMapper field_136; // offset 136
        VBOMapper field_168; // offset 168
        uint field_200;      // offset 200
        int field_204;       // offset 204
        vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>* field_208; // offset 208
        int field_216;                                                                                // offset 216
        char _unknown_220[4];
    };

    // 0x10019e0d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Js5NetQueue::~Js5NetQueue(): jumps straight to the base-object destructor

    // 0x10019e0e0, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // Js5NetQueue::~Js5NetQueue()
    void Js5NetQueue::~Js5NetQueue() {
        field_168->~VBOMapper();
        field_136->~VBOMapper();
        field_104->~VBOMapper();
        field_80->~shared_ptr();
        (&field_40)->~vector_map();
        ~vector_map();
    }

    // 0x1009f29e0, 32 bytes, inline, placed by class name
    // Js5NetQueue::IsUrgentQueueFull() const
    bool Js5NetQueue::IsUrgentQueueFull() {
        ulong uVar1;

        uVar1 = GetUrgentQueueSize(this);
        return 499 < uVar1;
    }

    // 0x1009f2b60, 32 bytes, inline, placed by class name
    // Js5NetQueue::IsPrefetchQueueFull() const
    bool Js5NetQueue::IsPrefetchQueueFull() {
        ulong uVar1;

        uVar1 = GetPrefetchQueueSize(this);
        return 499 < uVar1;
    }

    // 0x1009f3540, 16 bytes, inline, placed by class name
    // Js5NetQueue::GetUrgentQueueSize() const
    void Js5NetQueue::GetUrgentQueueSize() {
        size();
    }

    // 0x1009f3550, 16 bytes, inline, placed by class name
    // Js5NetQueue::GetPrefetchQueueSize() const
    void Js5NetQueue::GetPrefetchQueueSize() {
        (&field_40)->size();
    }

    // 0x1009f47a0, 224 bytes, inline, placed by class name
    // Js5NetQueue::RequestData(unsigned int, unsigned int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>)
    /* Js5NetQueue::RequestData(unsigned int, unsigned int, unsigned int, bool, std::function<void
   (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&,
   PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>) */

    undefined4 Js5NetQueue::RequestData(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4,
                                        function* param_6) {
        undefined4 uVar1;
        VBOMapper local_90;
        undefined4 local_6c;
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                      PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>
            local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_6c = param_3;
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::function(local_68, param_6);
        new (&local_90) PacketT<Array<unsigned char, eastl::allocator>>();
        uVar1 = RequestData(this, param_1, param_2, local_6c, param_4, local_68, &local_90, Priority::LOW);
        local_90.~VBOMapper();
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

} // namespace jag

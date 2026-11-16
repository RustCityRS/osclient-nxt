// libs/logger/Logger.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::logger {
    class DebugOutputSink {
    public:
        // virtual methods in vtable order
        virtual ~DebugOutputSink();
        virtual void Write(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, LogLevel);
        DebugOutputSink();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    class LogStream {
    public:
        GetName() const;
        GetGroup() const;
        LogStream(LogStream const&);
        LogStream(eastl::fixed_string<char, 32, true, eastl::allocator>,
                  eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel);
        ~LogStream();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[80];
    };

    class Logger {
    public:
        GetLogStreams();
        Logger(shared_ptr<Sink> const&);
        ~Logger();
        Logger();
        void SetLoggingIdentifier(std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)> const&);
        void Log(bool, LogLevel, char const*, int, char const*, ...);
        void LogMsg(bool, LogLevel, char const*, int, eastl::fixed_string<char, 2048, true, eastl::allocator> const&);
        void Log(bool, LogStream, LogLevel, char const*, int, char const*, ...);
        void LogVA(bool, LogLevel, char const*, int, char const*, __va_list_tag*);
        void AddSink(shared_ptr<Sink> const&);
        void RemoveSink(shared_ptr<Sink> const&);
        void RegisterStream(eastl::fixed_string<char, 32, true, eastl::allocator>,
                            eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel);
        ulong TryLogOnce(char const*, int, eastl::fixed_string<char, 2048, true, eastl::allocator> const&);
        static /* 144 bytes */ m_logLevels__;         // initialised in its definition
        static StringEnum /* 16 bytes */ m_logLevels; // = StringEnum((StringEnumEntry *)&m_logLevels__, 9)

        // data members, from how the methods use this: 112 bytes
        char _unknown_0[48];
        int field_48; // offset 48
        char _unknown_52[60];
    };

    // 0x100430b30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LogStream::LogStream(LogStream const&): jumps straight to the base-object constructor

    // 0x100432390, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // LogStream::LogStream(LogStream const&)
    void LogStream::LogStream(LogStream* param_1) {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        new (&field_72, (fixed_string*)&param_1->field_72) eastl::fixed_string<char, 32, true, eastl::allocator>();
    }

    // 0x100c9d410, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LogStream::LogStream(eastl::fixed_string<char, 32, true, eastl::allocator>, eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel): jumps straight to the base-object constructor

    // 0x100c9d420, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LogStream::~LogStream(): jumps straight to the base-object destructor

    // 0x100ca6c50, 16 bytes, complete-object destructor, inline, placed by class name
    // Logger::~Logger(): jumps straight to the base-object destructor

    // 0x100ca6de0, 16 bytes, inline, placed by class name
    // Logger::SetLoggingIdentifier(std::function<void (eastl::fixed_string<char, 64, true, eastl::allocator>&)> const&)
    /* Logger::SetLoggingIdentifier(std::function<void (eastl::fixed_string<char, 64, true,
   eastl::allocator>&)> const&) */

    void Logger::SetLoggingIdentifier(function* param_1) {
        std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>::operator=(
            (function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>*)this, param_1);
    }

    // 0x100ca6ec0, 48 bytes, base-object destructor, inline, placed by class name
    // Logger::~Logger()
    void Logger::~Logger() {
        (&field_104)->~vector();
        (&field_56)->~map();
        std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>::~function(
            (function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>*)this);
    }

} // namespace jag::logger

namespace jag {
    // 0x100430b50, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildSingleLocationMain>::type bucket_make_shared<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> >(int&&, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90&&, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    jag* jag::bucket_make_shared<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&,
                                 shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90, int&,
                                 Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                                 Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        int* param_1, shared_ptr* param_2, shared_ptr* param_3, shared_ptr* param_4, Rotation90* param_5, int* param_6,
        Array* param_7, Array* param_8) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_48;
        BuildSingleLocationMain* local_40[2];

        local_48 = (managed_ptr_counter_and_data*)BucketManager::Allocate(160, 0, 16);
        if (local_48 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_40[0] = placement_new<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&,
                                        shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90,
                                        int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
                local_48 + 48, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
            pBVar1 = placement_new<BucketRefCounter<game::BuildSingleLocationMain>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>,
                                                                game::BuildSingleLocationMain>*&,
                                   game::BuildSingleLocationMain*&>(local_48, &local_48, local_40);
            pBVar1->~AutoSingleton(local_40[0]);
            pBVar1->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_40[0]);
        }
        return this;
    }

    // 0x100430ee0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::VFXAttachmentInfo>::type make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&>(graphics::VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&)
    /* shared_ptr_if_not_array<graphics::VFXAttachmentInfo>::type
   make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData
   const&, math::Matrix44T<float>&>(graphics::VFXAttachmentInfo::RawData const&,
   math::Matrix44T<float>&) */

    jag*
    jag::make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData_const&, math::Matrix44T<float>&>(
        RawData* param_1, Matrix44T* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        VFXAttachmentInfo* local_38[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] = placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData_const&,
                                        math::Matrix44T<float>&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::VFXAttachmentInfo>, int, graphics::VFXAttachmentInfo*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::game {
    // 0x100431590, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // EntityHighlightVisualData::EntityHighlightVisualData(): jumps straight to the base-object constructor

} // namespace jag::game

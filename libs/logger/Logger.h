// libs/logger/Logger.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::logger {
    class DebugOutputSink {
    public:
        // virtual methods in vtable order
        virtual ~DebugOutputSink();
        virtual void Write(const eastl::fixed_string<char, 2048>& str, LogLevel logLevel);
        DebugOutputSink();
    };

    class LogStream {
    public:
        void GetName() const;
        uint8_t* GetGroup() const;
        LogStream(const LogStream& logStream);
        LogStream(eastl::fixed_string<char, 32> str1, eastl::fixed_string<char, 32> str2, LogLevel logLevel);
        ~LogStream();

        uint8_t _unknown_0[80];
    };

    class Logger {
    public:
        uint8_t* GetLogStreams();
        Logger(const shared_ptr<Sink>& sink);
        ~Logger();
        Logger();
        void SetLoggingIdentifier(std::function<void(eastl::fixed_string<char, 64>&)> const& callback);
        void Log(bool arg1, LogLevel logLevel, const char* str1, int arg4, const char* str2, ...);
        void LogMsg(bool arg1, LogLevel logLevel, const char* str1, int arg4,
                    const eastl::fixed_string<char, 2048>& str2);
        void Log(bool arg1, LogStream logStream, LogLevel logLevel, const char* str1, int arg5, const char* str2, ...);
        void LogVA(bool arg1, LogLevel logLevel, const char* str1, int arg4, const char* str2,
                   __va_list_tag* va_list_tag);
        void AddSink(const shared_ptr<Sink>& sink);
        void RemoveSink(const shared_ptr<Sink>& sink);
        void RegisterStream(eastl::fixed_string<char, 32> str1, eastl::fixed_string<char, 32> str2, LogLevel logLevel);
        unsigned int TryLogOnce(const char* str1, int arg2, const eastl::fixed_string<char, 2048>& str2);
        static int32_t m_logLevels__[36]; // initialised in its definition
        static StringEnum m_logLevels;    // = StringEnum((StringEnumEntry *)&m_logLevels__, 9)

    private:
        uint8_t _unknown_0[48];
        int field_48;
        uint8_t _unknown_52[60];
    };

    // 0x100432390
    LogStream::LogStream(const LogStream& logStream)
        : eastl::fixed_string<char, 32>(logStream), field_72(&logStream.field_72) {}

    // 0x100ca6de0
    void Logger::SetLoggingIdentifier(std::function<void(eastl::fixed_string<char, 64>&)> const& callback) {
        *this = callback;
    }

    // 0x100ca6ec0
    Logger::~Logger() {
        field_104.~vector();
        field_56.~map();
    }

} // namespace jag::logger

namespace jag {
    // 0x100430b50
    shared_ptr_if_not_array<game::BuildSingleLocationMain>::type
    bucket_make_shared<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&,
                       shared_ptr<graphics::Model> const&, Rotation90, int&,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        int&& arg1, shared_ptr<game::LocType>& locType1, shared_ptr<game::LocType>& locType2,
        const shared_ptr<graphics::Model>& model, Rotation90&& rotation90, int& arg6,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg7,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg8) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>* in_stack_00000018;
        BuildSingleLocationMain* local_40[2];

        auto local_48 = BucketManager::Allocate(160, 0, 16);
        if (local_48 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&,
                                        shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90,
                                        int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
                local_48 + 48, (int*)locType1, locType2, (shared_ptr<game::LocType>*)model,
                (shared_ptr<graphics::Model>*)rotation90, (Rotation90*)arg6, (int*)arg7, arg8, in_stack_00000018);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildSingleLocationMain>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>,
                                                           game::BuildSingleLocationMain>*&,
                              game::BuildSingleLocationMain*&>(local_48, &local_48, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100430ee0
    shared_ptr_if_not_array<graphics::VFXAttachmentInfo>::type
    make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&,
                math::Matrix44T<float> const&>(const graphics::VFXAttachmentInfo::RawData& rawData,
                                               const math::Matrix44T<float>& matrix44) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        VFXAttachmentInfo* local_38[2];

        auto arg1 = aligned_alloc(256, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::VFXAttachmentInfo>::type result;
        } else {
            local_38[0] = placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&,
                                        math::Matrix44T<float>&>((void*)((long)arg1 + 32), rawData, matrix44);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::VFXAttachmentInfo>, int, graphics::VFXAttachmentInfo*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag

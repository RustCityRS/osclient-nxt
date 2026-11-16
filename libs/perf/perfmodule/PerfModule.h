// libs/perf/perfmodule/PerfModule.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::perf {
    class PerfModule {
    public:
        class Desc;
        // virtual methods in vtable order
        virtual ~PerfModule();
        virtual void __pure_slot_2() = 0;
        virtual void OnRun(PerfModuleResult& perfModuleResult, float arg2, float arg3, int arg4);
        virtual void OnSucceeded(PerfModuleResult& arg1);
        void GetDesc() const;
        void OnFailed(PerfModuleResult& arg1);

    private:
        uint8_t _unknown_8[480];
        uint32_t field_488;
        uint8_t _unknown_492[4];
    };

    class PerfModule::Desc {
    public:
        void GetID() const;
        void GetName() const;
        void GetUnits() const;
        ~Desc();

        uint8_t _unknown_0[416];
    };

    // 0x100bc4960
    void PerfModule::Desc::GetUnits() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100bc5560
    PerfModule::~PerfModule() {
        field_8.~Desc();
    }

    // 0x100bc5590
    PerfModule::Desc::~Desc() {
        field_408.~fixed_string();
    }

} // namespace jag::perf

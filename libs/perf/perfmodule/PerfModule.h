// libs/perf/perfmodule/PerfModule.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::perf {
    class PerfModule {
    public:
        class Desc;
        // virtual methods in vtable order
        virtual ~PerfModule();
        virtual void __pure_slot_2() = 0;
        virtual void OnRun(PerfModuleResult&, float, float, int);
        virtual OnSucceeded(PerfModuleResult&);
        GetDesc() const;
        OnFailed(PerfModuleResult&);

        // data members, from how the methods use this: 496 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[480];
        undefined4 field_488; // offset 488
        char _unknown_492[4];
    };

    class PerfModule::Desc {
    public:
        GetID() const;
        GetName() const;
        void GetUnits() const;
        ~Desc();

        // data members, from how the methods use this: 416 bytes
        char _unknown_0[416];
    };

    // 0x100bc4960, 32 bytes, inline, placed by class name and debug map
    // PerfModule::Desc::GetUnits() const
    void PerfModule::Desc::GetUnits() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100bc5560, 32 bytes, base-object destructor, inline, placed by class name
    // PerfModule::~PerfModule()
    void PerfModule::~PerfModule() {
        field_0 = &PTR__OptionStore_100f27b80;
        (&field_8)->~Desc();
    }

    // 0x100bc5580, 16 bytes, complete-object destructor, inline, placed by class name
    // PerfModule::Desc::~Desc(): jumps straight to the base-object destructor

    // 0x100bc5590, 64 bytes, base-object destructor, inline, placed by class name
    // PerfModule::Desc::~Desc()
    void PerfModule::Desc::~Desc() {
        /* WARNING: Subroutine does not return */
        (&field_408)->~fixed_string();
    }

} // namespace jag::perf

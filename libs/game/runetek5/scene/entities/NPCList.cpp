// libs/game/runetek5/scene/entities/NPCList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag {
    class NPCList {
    public:
        // virtual methods in vtable order
        virtual ~NPCList();
        virtual void MainDraw(unsigned int arg1);
        void MainLogic(int arg1);
        void ClearNPCList();
        void DestroyRenderingResources();

    private:
        uint8_t _unknown_8[45216];
        uint32_t field_45224;
        uint8_t _unknown_45228[12];
    };

    // 0x100009e70: NPCList::MainDraw(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: NPCList::MainLogic(int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10041b250
    NPCList::~NPCList() {
        ClearNPCList();
        field_45232.~fixed_vector();
        field_8.~fixed_hash_map();
    }

    // 0x10041b2b0
    void NPCList::ClearNPCList() {
        long lVar2;
        Entity* this_01;

        uint8_t* this_00 = &field_8;
        auto local_40 = this_00->begin();
        auto local_50 = this_00->end();
        bool cVar1 = local_40 != local_50;
        if (cVar1) {
            do {
                lVar2 = local_40.HeapBeginPtr();
                cVar1 = ((lVar2 + 8))->operator_cast_to_bool();
                if (cVar1) {
                    this_01 = (Entity*)*(*((lVar2 + 8)));
                    this_01->GetNode()->Detach();
                    this_01->GatherDrawableElements();
                    this_01->ResetWorld();
                }
                ++local_40;
                cVar1 = local_40 != local_50;
            } while (cVar1);
        }
        this_00->clear();
        field_45224 = 0;
        local_40[0]._0_4_ = 4294967295;
        field_41128.fill(local_40);
        field_45232.clear();
    }

    // 0x10041b490
    void NPCList::DestroyRenderingResources() {
        long lVar2;
        long* plVar3;

        auto local_40 = field_8.begin();
        auto local_30 = field_8.end();
        bool cVar1 = local_40 != local_30;
        if (cVar1) {
            do {
                lVar2 = local_40.HeapBeginPtr();
                cVar1 = ((lVar2 + 8))->operator_cast_to_bool();
                if (cVar1) {
                    plVar3 = (long*)(*((lVar2 + 8))).operator->();
                    (**(void (**)(...))(*plVar3 + 200))(plVar3);
                }
                ++local_40;
                cVar1 = local_40 != local_30;
            } while (cVar1);
        }
    }

} // namespace jag

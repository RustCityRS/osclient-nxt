// libs/game/runetek5/scene/ObjStackList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ObjStackList : public ZoneEntityManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ObjStackList();
        virtual void MainLogic(graphics::RT7Core&, game::AssetBuilder&);
        ObjStackList(math::Point<int> const&, int);
        void ClearObjStack();
        void AddObjStack(shared_ptr<game::World> const&, game::ConfigProvider const*, game::CoordGrid const&,
                         unsigned int, unsigned int);
        void DelObjStack(game::CoordGrid const&, unsigned int);
        void AdjustCount(game::CoordGrid const&, unsigned int, unsigned int, unsigned int);

        // data members, from how the methods use this: 144 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[47];
        Skybox field_56; // offset 56
    };

} // namespace jag

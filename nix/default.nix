let
  sources = import ./sources.nix;
in
import sources.nixpkgs {
  overlays = [
    (self: super: {
      bsnes-plus = self.callPackage ./pkgs/bsnes-plus {};
      cc65 = self.callPackage ./pkgs/cc65 {};
      superfamiconv = self.callPackage ./pkgs/SuperFamiconv {};
    })
  ];
}

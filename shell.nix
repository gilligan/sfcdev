{ pkgs ? import ./nix }:

pkgs.mkShell {
  buildInputs = with pkgs; [ gnumake bsnes-plus cc65 superfamiconv ];
}

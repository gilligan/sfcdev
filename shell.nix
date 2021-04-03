{ pkgs ? import ./nix }:

pkgs.mkShell {
  buildInputs = with pkgs; [ bsnes-plus cc65 superfamiconv ];
}

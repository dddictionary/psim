{ lib
, stdenv
, raylib
, cmake
}:

stdenv.mkDerivation rec {
  pname = "psim";
  version = "0.1.0";
  
  src = ./.;

  nativeBuildInputs = [ cmake ];
  buildInputs = [ raylib ];

  cmakeFlags = [
    "-DENABLE_TESTING=OFF"
    "-DENABLE_INSTALL=ON"
  ];

  meta = with lib; {
    homepage = "https://github.com/dddictionary/psim";
    description = "Particle simulation using raylib in C.";
    license = licenses.mit;
    platforms = platforms.unix;
    maintainers = with maintainers; [ dddictionary ];
  };
}
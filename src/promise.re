type t;
external pixelCompare : 'a => t = "pixel-compare" [@@bs.module];

external _then : ('a => 'b) => ('b, 'f) = "then" [@@bs.send.pipe: t];

pixelCompare([%bs.obj {
	baseImage: "./src/dragon.png",
	testImage: "./src/dragon.png"
}]) |> _then (fun res => Js.log res);

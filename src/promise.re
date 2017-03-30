type t;
external pixelCompare : 'a => t = "pixel-compare" [@@bs.module];
external _then : ('a => 'b) => t = "then" [@@bs.send.pipe: t];
external catch: ('a => 'b) => t = "catch" [@@bs.send.pipe: t];

type args = Js.t {
	. baseImage: string,
	testImage: string
};

pixelCompare ([%bs.obj {
	baseImage: "./src/dragon.png",
	testImage: "./src/dragon.png"
}] : args)
|> _then (fun res => Js.log res)
|> catch (fun err => Js.log err);

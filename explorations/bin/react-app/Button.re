/**
 * This is a comment here.
 * and another one.
 */

let foo = "alskdfj";
[@react.experiment.static];
open StaticReact;
open ReactDOM;
type state = string;

type action =
  | Click;

type renderedTree = ReactDOM.dom(React.empty);

type t = (state, React.noAction) => renderedTree;

let render = (~txt="default", ~size: int, children, ~state=txt, self) =>
  React.Reducer(
    state,
    <> <div className="buttonClass" /> </>,
    React.nonReducer,
  );

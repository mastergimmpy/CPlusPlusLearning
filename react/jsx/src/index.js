import React from 'react';
import ReactDOM from 'react-dom';
import CommentDetail from './CommentDetail';
import faker from 'faker';

const App = () => {
  return (
    <div className="ui container comments">
      <CommentDetail 
        author={faker.name.firstName()} 
        timeAgo="Today 3:32AM" 
        avatarSRC={faker.image.nature()} 
        commentContent="Awesome!"
      />
      <CommentDetail 
        author={faker.name.firstName()} 
        timeAgo="Yesterday 6:00PM" 
        avatarSRC={faker.image.city()} 
        commentContent="Thanks for the info."
      />
      <CommentDetail 
        author={faker.name.firstName()} 
        timeAgo="Yesterday 2:00AM" 
        avatarSRC={faker.image.cats()} 
        commentContent="Cool blog!"
      />
    </div>
  );
};

ReactDOM.render(<App />, document.querySelector('#root'));
